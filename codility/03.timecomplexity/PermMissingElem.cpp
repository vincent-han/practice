#include <iostream>
#include <vector>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int sum = 0;
    int continueSum = A.size() + 1;
    for(int i = 0; i < A.size(); i++) {
        sum += A[i];
        continueSum += i+1;
    }
    
    return continueSum - sum;
}

int main() {
	vector<int> v({2,3,1,5});
	cout << solution(v) << endl;
	return 0;
}