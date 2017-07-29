#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int m = 0;
    int sum = 0;
    
    for(int i: A) cout << i << ' '; cout << endl;
    for(int &i: A) {
        i = abs(i);
        m = max(m, i);
        sum += i;
    }
    for(int i: A) cout << i << ' '; cout << endl;
    
    vector<int> count(m+1, 0);
    for(int i: A) {
        count[i]++;
    }

    for(int i: count) cout << i << ' '; cout << endl;
    vector<int> vs(sum+1, -1);
    vs[0] = 0;
    for(int i = 1; i <= m; i++) {
        if(count[i] > 0) {
            for(int j = 0; j <= sum; j++) {
                if(vs[j] >= 0) {
                    vs[j] = count[i];
                } else if(j >= i && vs[j-i] > 0) {
                    vs[j] = vs[j-i] - 1;
                }
            }
        }
        cout << i << ' ' << count[i] << " : " ;
        for(int a: vs) cout << a << "\t"; cout << endl; 
    }
    
    int result = sum;
    for (int i = 0; i * 2 <= sum; i++){
        if (vs[i] >= 0){
            result = min(sum - 2*i, result); 
        }
    }
    return result;
}

int main() {
    vector<int> p({1,5,2});

    cout << solution(p) << endl;

    return 0;
}