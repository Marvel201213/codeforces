#include <iostream>
#include <vector>
#include <cmath>

int main () {
    int T; std::cin >> T;
    for (int CASES  = 0; CASES < T; ++CASES) {
        int n; std::vector<long long> numbers;
        std::cin >> n;
        for (int i = 0; i < n; ++i) {
            long long input; std::cin  >> input;
            numbers.emplace_back(input);
        }
        int i =2;
        bool flagor = true;
        std::vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
        for(int i: primes) {
            bool flag = true;
            for (long long number: numbers) {
                if (number%i != 0 ) {
                    flag = false;
                    break;
                }
            }
            if (!flag) {
                std::cout << i << std::endl;
                flagor = false;
                break;
            }
        }
        if (flagor) {
            std::cout << -1 << std::endl;
        }
    }

    return 0;
}