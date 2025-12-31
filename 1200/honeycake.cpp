#include <iostream>
using namespace std;
int gcd(int number_one, int number_two) {
    if (number_one == 0 ) {
        return number_two;
    }
    else if (number_two == 0) {
        return number_one;
    }
    else {
        if (number_one == number_two) {
            return number_one;
        }
        else {
            if (number_one > number_two) {
                number_one = number_one%number_two;
                return gcd(number_one, number_two);
            }
            else {
                number_two = number_two % number_one;
                return gcd(number_one, number_two);
            }
        }
    }
}
int main () {
    int w,h, d; cin >> w >> h >> d;
    int n; cin >> n;
    int w_p = gcd(n,w);
    int n_w = n/w_p;
    int h_p = gcd(n_w,h);
    int n_h = n_w/h_p;
    int d_p = gcd(n_h, d);
    int n_d = n_h/d_p;
    if (n_d == 1) {
        cout << w_p -1 << " " << h_p-1 << " " << d_p-1 << '\n';
    }
    else {
        cout << -1 << '\n';
    }

}