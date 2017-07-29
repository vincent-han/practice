#include <iostream>
#include <vector>
#include <map>

using namespace std;

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    map<int, int> m;
    for(int i = 0; i < A.size(); i++) {
        if(m.find(A[i]) == m.end()) {
            m[A[i]] = i;
        }
    }
    
    int max = -1;
    while(X > 0) {
        if(m.find(X) == m.end()) {
            return -1;
        }

        if(m[X] > max) {
            max = m[X];
        }
        X--;
    }
    
    return max;
}

int main() {
	vector<int> v({1,3,1,4,2,3,5,4});
	cout << solution(5, v) << endl;
	return 0;
}