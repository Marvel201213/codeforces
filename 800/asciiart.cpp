#include <iostream>

int main() {
    int g,c,l;
    std::cin >> g >> c >> l;
    int min, mid, max;
    if (c <= g  && c <= l) {
        min = c;
        if (g < l) {
            mid = g;
            max = l;
        }
        else {
            mid = l;
            max = g;
        }
    }
    else if (g <= c && g <=l ) {
        min = g;
        if (c < l) {
            mid = c;
            max = l;
        }
        else  {
            mid = l;
            max = c;
        }
    }
    else {
        min = l;
        if (g < c) {
            mid = g;
            max = c;
        }
        else {
            mid = c;
            max = g;
        }
    }
    if (max - min < 10) {
        std::cout << "final " << mid << std::endl;
    }
    else {
        std::cout << "check again" << std::endl;
    }
    return 0;
}