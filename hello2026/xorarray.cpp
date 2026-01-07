#include <iostream>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        bool flag = true;
        for (int i = 0; i < n; ++i) {
            int number; cin >> number;
            if (number == 1 && (i == 0 || i == n-1)) {
                flag = false;
            }
        }
        if (! flag) {
            cout << "Alice" << '\n';
        }
        else {
            cout << "Bob" << '\n';
        }
    }
    return 0;
}