#include <iostream>

int main () {
    int n, k;
    std::cin >> n >> k;
    while (k > 0) {
        if (n%10 < k) {
            k-=n%10+1;
            n/=10;
        } 
        else {
            n-=k;
            k = 0;
        }
    }
    std::cout << n;
    return 0;
}