#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int prev = -1;
    long long add = 0;
    for (unsigned int i = 0; i < n; i++) {
        int number;
        cin >> number;
        if (i != 0 && number <= prev) {
            add+= prev-number;
        } else {
            prev = number;
        }
    }
    cout << add;
    return 0;
}