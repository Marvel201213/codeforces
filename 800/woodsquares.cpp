#include <iostream>
#include <cmath>

int main () {
    int T; std::cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; std::cin >> n;
        long long sum = 0;
        for (int i =0; i < n; ++i) {
            long long number;
            std::cin >> number;
            sum+=number;
        }
        long long sqrtsum = std::sqrt(sum);
        if (sqrtsum * sqrtsum == sum) {
            std::cout << "YES" << std::endl;
        }
        else {
            std::cout << "NO" << std::endl;
        }
    }

    return 0;
}