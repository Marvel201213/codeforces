#include <iostream>
#include <cmath>
using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int res = 1;
    int i = 0;
    while (i < n) {
        res*=2;
        res%=((int)pow(10, 9)) + 7;
        i++;
    }
    cout << res;
    return 0;
}