#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A, vector<int> &B) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size() <= 1) {
        return A.size();
    }
    
    int count = 1;
    int check = B[0];

    for(size_t i = 1; i < A.size(); i++) {
        if(A[i] > check) {
            count++;
            check = B[i];
        }
    }
    
    return count;
}

int main() {
    vector<int> a({1,3,7,9,9});
    vector<int> b({5,6,8,9,10});

    cout << solution(a,b) << endl;

    return 0;
}