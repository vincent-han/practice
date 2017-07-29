#include <iostream>
#include <vector>

using namespace std;

int solution(int K, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int sum = 0;
    int count = 0;
    
    for(int len: A) {
        sum += len;
        if(sum >= K) {
            count++;
            sum = 0;
        }
    }
    
    return count;
}

int main() {
    vector<int> a({1,2,3,4,1,1,3});

    cout << solution(4, a) << endl;

    return 0;
}