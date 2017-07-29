#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    sort(A.begin(), A.end());
    
    int last = A.size() - 1;

    if(A[last] <= 0 || A[1] > 0) {
        return A[last] * A[last-1] * A[last-2];
    } else if(A[last-2] < 0) {
        return A[0] * A[1] * A[last];
    } else {
        return max(A[0]*A[1]*A[last], A[last] * A[last-1] * A[last-2]);
    }
}

int main() {
	vector<int> p;
	srand( (unsigned)time(NULL) );
	for(int i = 0; i < rand()%5000; i++) {
		p.push_back((rand()%1000) * (rand()%2?1:-1));
	}

	int max = INT_MIN;
	int ma, mb, mc;
	for(int a = 0; a < p.size(); a++) {
		for(int b = a+1; b < p.size(); b++) {
			for(int c = b+1; c < p.size(); c++) {
				if(max < p[a]*p[b]*p[c]) {
					max = p[a]*p[b]*p[c];
					ma = a;
					mb = b;
					mc = c;
				}
			}
		}
	}
	for(int i: p) cout << i << " "; cout << endl;
	printf("%d[%d] %d[%d] %d[%d]\n", ma, p[ma], mb, p[mb], mc, p[mc]);
	int r = solution(p);
	cout << r << " " << max << " " << (r==max?"same":"diff!!!") << endl;
	return 0;
}