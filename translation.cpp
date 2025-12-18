#include <iostream>
#include <string>

int main() {
    std::string a, b;
    std::cin >> a >> b;
    int l = 0;
    int r = a.size()-1;
    if (a.size() != b.size()) {
        std::cout << "NO";
        return 0;
    }
    while (l < a.size()) {
        if (a[l] != b[r]) {
            std::cout << "NO";
            return 0;
        }
        l+=1;
        r-=1;
    }
    std::cout << "YES";
    return 0;
}