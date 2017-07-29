#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    // write your code in C++14 (g++ 6.2.0)
    map<char, vector<int>> m;
    vector<int> v;
    
    m['A'] = vector<int>(S.length()+1, 0);
    m['C'] = vector<int>(S.length()+1, 0);
    m['G'] = vector<int>(S.length()+1, 0);

    for(size_t i = 0; i < S.length(); i++) {
        m['A'][i+1] = m['A'][i] + ('A' == S[i] ? 1 : 0);
        m['C'][i+1] = m['C'][i] + ('C' == S[i] ? 1 : 0);
        m['G'][i+1] = m['G'][i] + ('G' == S[i] ? 1 : 0);
    }
    
    for(size_t i = 0; i < P.size(); i++) {
        if(m['A'][Q[i]+1] - m['A'][P[i]] > 0) {
            v.push_back(1);
        } else if(m['C'][Q[i]+1] - m['C'][P[i]] > 0) {
            v.push_back(2);
        } else if(m['G'][Q[i]+1] - m['G'][P[i]] > 0) {
            v.push_back(3);
        } else {
            v.push_back(4);
        }
    }
    
    return v;
}

int main() {
	vector<int> p({2,5,0});
    vector<int> q({4,5,6});
    string s = "CAGCCTA";
	vector<int> v = solution(s, p, q);

    for(int i: v)
        cout << i << ' ';
    cout << endl;
	return 0;
}