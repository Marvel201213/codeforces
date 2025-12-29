#include <iostream>

using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        if (n==1) {
            cout << 1 << '\n';
        }
        else if (n==2) {
            cout << 9 << '\n';
        }
        else {
            int cand1= n*n + (n*n-1) + (n*n-n-1) + (n*n-2);
            int cand2 = (n*n-n-1) + (n*n-1) + (n*n-n-2) + (n*n-n) + (n*n-2*n-1);
            if (cand1 < cand2) {
                cout << cand2 << "\n";
            }
            else {
                cout << cand1 << "\n";
            }
        }

    } 
    return 0;
}