#include <iostream>
#include <string>

int main() {
    std::string a, b;
    std::cin >> a >> b;
    for(int i = 0; i < a.size(); ++i) {
        if (a[i] == b[i]) {
            a[i] = '0';
        }
        else  {
            a[i] = '1';
        }
    }
    std::cout << a;
}