#include <iostream>
using namespace std;
int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        for (int i = 1; i <=n; ++i) {
            if (i != n) {
                cout << i << " ";
            }
            else {
                cout << i << '\n';
            }
        }
    }
    return 0;
}