#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    vector<int> v(A.size(), INT_MIN);
    
    v[0] = A[0];
    for(int i = 1; i < A.size(); i++) {
        for(int j = min(6, i); j > 0; j--) {
            v[i] = max(v[i], v[i-j]);
        }
        v[i] += A[i];
    }
    
    return v[v.size()-1];
}

int main() {
	vector<int> p;//({1,5,2,1,4,0});
	srand( (unsigned)time(NULL) );
	for(int i = 0; i < rand()%20 + 2; i++) {
		p.push_back((rand()) * (rand()%2?1:-1));
	}
    for(int i: p) cout << i << " ";cout << endl;
	cout << solution(p) << endl;

	return 0;
}