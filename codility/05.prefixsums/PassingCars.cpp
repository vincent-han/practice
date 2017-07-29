#include <iostream>
#include <vector>

using namespace std;

const int MAX_PAIR = 1000000000;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int pair = 0;
    int one = 0;
    for(int i = A.size() - 1; i >= 0; i--) {
        if(A[i] == 1) {
            one++;
        } else {
            pair += one;
            if(pair > MAX_PAIR) {
                return -1;
            }
        }
    }
    
    return pair;
}

int main() {
	vector<int> v({0,1,0,1,1});
	cout << solution(v) << endl;
	return 0;
}