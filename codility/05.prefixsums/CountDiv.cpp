#include <iostream>

using namespace std;

int solution(int A, int B, int K) {
    // write your code in C++14 (g++ 6.2.0)
    int start = A % K ? A + (K - A % K) : A;
    if(B - start < 0) {
        return 0;
    }
    
    return (B - start) / K + 1;
}

int main() {
	cout << solution(6, 11, 2) << endl;
	return 0;
}