#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    if(A.size() < 3) return 0;
    
    sort(A.begin(), A.end());
    if(A[A.size()-2] <= 0) return 0;
    
    for(int i = 0; i < A.size(); i++) {
    	if(A[i] <= 0) continue;
        for(int j = A.size() - 1; j > i+1; j--) {
        	if(A[j] - A[i] < A[j-1])
        		return 1;
        }
    }
    
    return 0;
}

int main() {
	vector<int> p;
	srand( (unsigned)time(NULL) );
	for(int i = 0; i < rand()%100; i++) {
		p.push_back((rand()%1000) * (rand()%3?1:-1));
	}
	cout << solution(p) << endl;

	for(int i = 0; i < p.size(); i++) {
		for(int j = i + 1; j < p.size(); j++) {
			for(int k = j + 1; k < p.size(); k++) {
				if(p[i] + p[j] > p[k]
					&& p[i] + p[k] > p[j]
					&& p[j] + p[k] > p[i]) {
					printf("(%d,%d,%d) ", i, j, k);
				}
			}
		}
	}
	return 0;
}