#include <iostream>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> &A) {
    set<int> s;
    
    for(int i: A) {
        s.insert(i);
    }
    
    return s.size();
}

int main() {
	vector<int> p({2,1,1,2,3,1});
	cout << solution(p) << endl;
	return 0;
}