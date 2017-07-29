#include <iostream>

using namespace std;

int solution(int N) {
    int rest = 0;
    int gap = 0;
    int maxGap = 0;
    bool gapstart = false;

    while(N > 0) {
        rest = N % 2;
        N /= 2;
        
        if(gapstart) {
            if(0 == rest) {
                gap++;
            } else if(maxGap < gap) {
                maxGap = gap;
            }
        }
        
        if(1 == rest) {
            gapstart = true;
            gap = 0;
        }
    }
    
    return maxGap;
}

int main() {
    cout << solution(1041) << endl;
    return 0;
}