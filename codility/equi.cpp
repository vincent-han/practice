#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.empty()) return -1;
    if(A.size() == 1) return 0;

    long long sum1 = 0;
    long long sum2 = A[A.size() - 1];
    
    for(size_t i = 0; i < A.size() - 1; i++) {
        sum1 += A[i];
    }
    
    if(0 == sum1) {
        return A.size() - 1;
    } else if(0 == sum1 - A[0] + sum2) {
        return 0;
    }
    
    sum1 -= A[A.size() - 2];
    for(int i = A.size() - 2; i > 0; i--) {
        if(sum1 == sum2) {
            return i;
        }
        sum1 -= A[i - 1];
        sum2 += A[i];
    }
    
    return -1;
}

int main() {
    vector<int> v({-1,3,-4,5,1,-6,2,1});
    cout << solution(v) << endl;
    return 0;
}