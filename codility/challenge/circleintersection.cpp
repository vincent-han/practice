#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>

using namespace std;

double solution(int x0, int y0, int r0, int x1, int y1, int r1) {
  long long rr0 = pow(r0, 2);//r0 * r0;
  long long rr1 = pow(r1, 2);//r1 * r1;
  double d = sqrt((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0));
  double phi = (acos((rr0 + (d * d) - rr1) / (2 * r0 * d))) * 2;
  double theta = (acos((rr1 + (d * d) - rr0) / (2 * r1 * d))) * 2;
  double area1 = 0.5 * theta * rr1 - 0.5 * rr1 * sin(theta);
  double area2 = 0.5 * phi * rr0 - 0.5 * rr0 * sin(phi);
  return area1 + area2;
    // d = hypot(B.x - A.x, B.y - A.y)

    // if (d < A.r + B.r) {

    //     a = A.r * A.r
    //     b = B.r * B.r

    //     x = (a - b + d * d) / (2 * d)
    //     z = x * x
    //     y = sqrt(a - z)

    //     if (d < abs(B.r - A.r)) {
    //         return PI * min(a, b)
    //     }
    //     return a * asin(y / A.r) + b * asin(y / B.r) - y * (x + sqrt(z + b - a))
    // }
    // return 0
}

int main() {
    cout << solution(2,2,3,5,5,3) << endl;

    return 0;
}