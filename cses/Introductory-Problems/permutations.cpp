#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    if (n == 2 || n == 3) {
        cout << "NO SOLUTION";
    } else if (n == 1) {
        cout << 1;
    } else {
        int start = n-1;
        while (start > 0) {
            cout << start << " ";
            start-=2;
        }
        start = n;
        while (start > 0) {
            cout << start << " ";
            start-=2;
        }
    }
    return 0;
}