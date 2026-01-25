#include <iostream>
#include <vector>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n, q; cin >> n >> q;
        vector<int> anums;
        vector<int> bnums;
        for (int i = 0; i < n; ++i) {
            int number; cin >> number;
            anums.emplace_back(number);
        }
        for (int i = 0; i < n; ++i) {
            int number; cin >> number;
            bnums.emplace_back(number);
        }
        for (int i =n-1; i >= 0; i-=1) {
            if (bnums[i] > anums[i]) {
                anums[i] = bnums[i];
            }
            if (i != n-1 && anums[i+1] > anums[i]) {
                anums[i] = anums[i+1];
            }
        }
        vector<int> prefix;
        prefix.emplace_back(0);
        for (int i = 0; i < n; ++i) {
            prefix.emplace_back(prefix[i]+anums[i]);
        }
        for (int i =0; i < q; ++i) {
            int l, r; cin >> l >> r;
            if (i == q-1) {
                cout << prefix[r]-prefix[l-1] <<'\n';
            }
            else {
                cout << prefix[r]-prefix[l-1] << " ";
            }
        }
    }
    return 0;
}