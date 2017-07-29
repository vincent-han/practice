#include <iostream>

using namespace std;

int solution(int X, int Y, int D) {
    // write your code in C++14 (g++ 6.2.0)
    int rest = (Y - X) % D;
    return (Y - X) / D + (rest ? 1 : 0);
}

int main() {
	cout << solution(10, 85, 30) << endl;
	return 0;
}