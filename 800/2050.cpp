#include <iostream>

int main () {
    int cases;
    std::cin >> cases;
    for(int TEST = 0; TEST < cases; ++TEST) {
        long long curr;
        std::cin>> curr;
        if (curr % 2050 !=0) {
            std::cout << -1 << std::endl;
            continue;
        }
        long long num = curr/2050;
        long long sum = 0;
        while (num > 0) {
            sum+=num%10;
            num/=10;
        }
        std::cout << sum << std::endl;
    }
    return 0;
}