#include <iostream>
#include <vector>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n, Ax, Ay, Bx, By; cin >> n;
        int l = -1;
        int r = -1;
        vector<int> perm;
        int search = 0;
        for (int i = 0; i < n; ++i) {
            int number; cin >> number;
            if (n-i != number && l == -1) {
                l = i;
                search = n-i;
            }
            if (search == number) {
                r = i;
            }
            perm.emplace_back(number);
        }
    }
    return 0;
}