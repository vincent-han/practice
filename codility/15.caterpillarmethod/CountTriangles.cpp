#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    sort(A.begin(), A.end());
    int triangles = 0;
    int r = 0;
    
    for(int p = 0; p < A.size(); p++) {
        r = p+2;
        for(int q = p+1; q < A.size(); q++) {
            while(r < A.size() && A[p] + A[q] > A[r]) {
                r++;
            }
            
            triangles += r - q - 1;
        }
    }
    
    return triangles;
}

int main() {
	vector<int> p({10,2,5,1,8,12});
	cout << solution(p) << endl;

	return 0;
}