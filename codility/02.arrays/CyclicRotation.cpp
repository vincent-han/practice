#include <iostream>
#include <vector>

using namespace std;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.empty()) return {};
    if(K > A.size()) K %= A.size();

    A.insert(A.begin(), A.end() - K, A.end());
    A.erase(A.end() - K, A.end());
    
    return A;
}

int main() {
	vector<int> v({3, 8, 9, 7, 6});

	v = solution(v, 3);
	for(int i: v)
		cout << i << " ";
	cout << endl;
}