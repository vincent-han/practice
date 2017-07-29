#include <iostream>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    map<int, int> pair;
    
    for(auto i: A) {
        if(pair.find(i) == pair.end()) {
            pair[i] = 1;
        } else {
            pair.erase(i);
        }
    }
    
    return pair.begin()->first;
}

int main() {
    vector<int> v({9,3,9,3,9,7,9});
    cout << solution(v) << endl;
    return 0;
}