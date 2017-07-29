#include <iostream>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    set<int> s;
    
    for(int i: A) {
        s.insert(abs(i));
    }
    
    return s.size();
}

int main() {
    vector<int> a({-5,-3,-1,0,3,6});

    cout << solution(a) << endl;

    return 0;
}