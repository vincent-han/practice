#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int solution(vector<int> & A) {
    int n = A.size();
    int result = 0;
    for (int i = 0; i < n - 1; i++) {
        if (A[i] == A[i + 1])
            result = result + 1;
    }

    int r = 0;
    for (int i = 0; i < n; i++) {
        int count = 0;
        if (i > 0) {
            if (A[i - 1] != A[i])
                count = count + 1;
            else
                count = count - 1;
        }

        if (i < n - 1) {
            if (A[i + 1] != A[i])
                count = count + 1;
            else
                count = count - 1;
        }

        r = max(r, count);
    }
    return result + (r?r:-1);
}

int main() {
    vector<int> p({1,1,0,1,0,0});
    cout << solution(p) << endl;

    return 0;
}