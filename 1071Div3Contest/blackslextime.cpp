#include <iostream>
#include <vector>
#include <cmath>

int main () {
    int T; std::cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; std::cin >> n;
        std::vector<int> times;
        for (int i = 0; i < n; ++i) {
            int currtime;
            std::cin >> currtime;
            times.emplace_back(currtime); 
        }
        int maxleft = std::abs(times[0]-times[1]);
        int maxright = std::abs(times[n-1]-times[n-2]);
        int absmax;
        if (maxleft < maxright) {
            absmax = maxright;
        }
        else {
            absmax = maxleft;
        }
        for (int i = 1; i < n-1; ++i) {
            int right = times[i]-times[i+1];
            int left = times[i-1]-times[i];
            int repl = times[i-1] - times[i+1];
            int res = std::abs(left) + std::abs(right)-std::abs(repl);
            if (res > absmax) {
                absmax = res;
            }
        }
        int tottime = 0;
        for (int i = 1; i < n; ++i) {
            tottime += std::abs(times[i-1]-times[i]);
        }
        tottime-=absmax;
        std::cout << tottime << std::endl;
    }
    return 0;
}