#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.empty()) return 0;
    vector<int> v(A.size(), 0);
    
    for(int i: A) {
        if(i > A.size() || v[i - 1] == 1) {
            return 0;
        }
        v[i - 1] = 1;
    }
    
    return 1;
}

int main() {
	vector<int> v({4,1,3,2});
	cout << solution(v) << endl;
    v = vector<int>({4,1,3});
    cout << solution(v) << endl;
	return 0;
}