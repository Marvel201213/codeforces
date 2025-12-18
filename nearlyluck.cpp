#include <iostream>

int main () {
    long long n;
    std::cin >> n;
    int luckycount = 0;
    while (n>0) {
        if (n% 10 == 4 or n%10 == 7) {
            luckycount+=1;
        }
        n/=10;
    }
    if (luckycount == 0) {
        std::cout << "NO" << std::endl;
        return 0;
    }
    while (luckycount > 0) {
        if (luckycount%10 != 4 and luckycount%10 != 7) {
            std::cout << "NO" << std::endl;
            return 0;
        }
        luckycount/=10;
    }
    std::cout << "YES" << std::endl;
    return 0;
}