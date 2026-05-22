#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;
    long long curr = n;
    while (curr!=1) {
        cout << curr << " ";
        if (curr % 2 == 0) {
            curr/=2;
        } else {
            curr = curr * 3 + 1;
        }
    }
    cout << curr << " ";
    return 0;
}