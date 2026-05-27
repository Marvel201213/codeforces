#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int l; int r;
        cin >> l >> r;
        if (2 *l-r >= 0 && (2 *l-r)%3 ==0 && 2 *r-l >= 0 && (2 *r-l)%3 ==0) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}