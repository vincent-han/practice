#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    double minAvg = 10000;
    double avg = 0;
    int minIndex = 0;
    
    for(size_t i = 0; i < A.size() - 2; i++) {
        avg = (A[i] + A[i+1]) / 2.0;
        if(avg < minAvg) {
            minIndex = i;
            minAvg = avg;
        }
        avg = (A[i] + A[i+1] + A[i+2]) / 3.0;
        if(avg < minAvg) {
            minIndex = i;
            minAvg = avg;
        }
    }
    
    if((A[A.size()-2] + A[A.size()-1]) / 2.0 < minAvg) {
        minIndex = A.size() - 2;
    }
    
    return minIndex;
}
int main() {
	vector<int> v({4,2,2,5,1,5,8});
	cout << solution(v) << endl;
	return 0;
}