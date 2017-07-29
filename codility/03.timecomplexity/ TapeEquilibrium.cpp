#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.empty()) return 0;

    size_t s = 0;
    int g1 = 0;
    int g2 = A[A.size() - 1];
    int gap = 0;

    while(s < A.size() - 1) {
        g1 += A[s++];
    }
    gap = abs(g1 - g2);
    
    while(s-- > 1) {
        g1 -= A[s];
        g2 += A[s];
        gap = gap > abs(g1 - g2) ? abs(g1 - g2) : gap;
    }
    
    return gap;
}

int main() {
	vector<int> v({3,1,2,4,3});
	cout << solution(v) << endl;
	return 0;
}