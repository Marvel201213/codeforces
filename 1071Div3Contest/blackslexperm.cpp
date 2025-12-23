#include <iostream>
#include <cmath>
#include <set>

int main () {
    int T; std::cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n;
        std::cin >> n;
        std::set<int> printed = {};
        for (int i =0; i < n; ++i) {
            int val = std::pow(2, n-i)-1;
            std::cout << val  << " ";
            printed.insert(val);
            for (int j = n-i; j < n-1; ++j) {
                int curr = n-1-j;
                for (int p = 1; p < std::pow(2, curr); ++p) {
                    int shifted =  p<<(j+1);
                    if (printed.find(val+shifted) == printed.end()) {
                        std::cout << (val + shifted) << " ";
                        printed.insert(val+shifted);
                    }
                }
            }
        }

        for (int i = 0; i < pow(2,n); i+=2) {
            if (i != pow(2,n)-2) {
                std::cout << i << " ";
            }
            else {
                std::cout << i << std::endl;
            }
        }
    }
    return 0;
}