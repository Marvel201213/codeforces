#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
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
        if (l != -1) {
            while (l < r) {
                int temp = perm[l];
                perm[l] = perm[r];
                perm[r] = temp;
                l+=1;
                r-=1;
            }
        }
        for (int i = 0; i < n; ++i) {
            if (i == n-1) {
                cout << perm[i] << "\n";
            }
            else {
                cout << perm[i] << " ";
            }
        }
    }
    return 0;
}