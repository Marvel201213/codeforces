#include <iostream>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T-- > 0) {
        long long y; long long x;
        cin >> y >> x;
        long long l = max(x, y);
        long long curr = 1 + (l * (l-1));
        if (x > y) {
            if (x%2 == 1) {
                curr+=(x-y);
            } else {
                curr -=(x-y);
            }
        } else {
            if (y%2 == 1) {
                curr-=(y-x);
            } else {
                curr+=(y-x);
            }
        }
        cout << curr << '\n';
    }
    return 0;
}