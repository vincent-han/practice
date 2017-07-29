#include <iostream>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    multimap<long long, long long> m;
    int count = 0;
    
    for(size_t i = 0; i < A.size(); i++) {
        m.insert(std::pair<long long,long long>((long long)(i-A[i]), (long long)(i+A[i])));
    }
    
    for(auto a = m.begin(); a != m.end(); a++) {
        auto b = a;
        for(b++; b != m.end() && (*a).second >= (*b).first; b++) {
            count++;
            if(count > 10E6) {
                return -1;
            }
        }
    }
    
    return count;
}

int main() {
	vector<int> p({1,5,2,1,4,0});
	// srand( (unsigned)time(NULL) );
	// for(int i = 0; i < rand()%100; i++) {
	// 	p.push_back((rand()%1000) * (rand()%3?1:-1));
	// }
	cout << solution(p) << endl;

	return 0;
}