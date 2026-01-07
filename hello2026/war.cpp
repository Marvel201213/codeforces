#include <iostream>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n, m, k; cin >> n >> m >> k;
        int left = k-1;
        int right = n-k;
        int res = 1;
        int maxxer, minner;
        int time = 1;
        int cand = 1;
        if (n == 0) {
            cout << 1 << '\n';
            continue;
        }
        if (left < right) {
            maxxer= right;
            minner = left;
        }
        else {
            maxxer =left;
            minner = right;
        }
        while (3 * (cand+1) - 2 <= m && maxxer > 0 && minner > 0) {
            cand+=1;
            res+=2;
            maxxer-=1;
            minner-=1;
        }
        while (maxxer > 0 && 2 * (cand+1) - 1 <=m) {
            cand+=1;
            res+=1;
            maxxer-=1;
        }
        cout << res << '\n';
    }
    return 0;
}