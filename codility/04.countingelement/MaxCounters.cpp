#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(int N, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> v(N, 0);
    
    int max = 0;
    int count = 0;
    for(int i: A) {
        if(i <= N) {
            if(v[i - 1] < max) {
                v[i - 1] = max;
            }
            v[i - 1]++;
            count = count < v[i - 1] ? v[i - 1] : count;
        } else {
            max = count;
        }
    }
    
    for(int &i: v) {
        if(i < max) {
            i = max;
        }
    }
    
    return v;
}

int main() {
    vector<int> v({3,4,4,6,1,4,4});
    v = solution(5, v);
    for(int i: v)
        cout << i << " ";
    cout << endl;
    return 0;
}