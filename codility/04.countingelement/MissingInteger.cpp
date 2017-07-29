#include <iostream>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    map<int, bool> m;
    
    int min = 1;
    for(int i: A) {
        if(i < min) continue;
        
        if(i == min) {
            while(m.find(++min) != m.end());
        } else if(m.find(i) == m.end()) {
            m[i] = true;
        }
    }
    
    return min;
}

int main() {
	vector<int> v({1,3,6,4,1,2});
	cout << solution(v) << endl;
	return 0;
}