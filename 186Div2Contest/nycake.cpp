#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int a, b; cin >> a >> b;
        int i = 1;
        int j = 2;
        while (pow(2,i-1) <= a) {
            i+=2;
        }
        i-=2;
        int sum = 0;
        for (int p = 1; p <= i; p+=2) {
            sum+=pow(2, p-1);
        }
        if (a < sum) {
            i-=2;
        }
        while (pow(2,j-1) <= b) {
            j+=2;
        }
        j-=2;
        sum = 0;
        for (int p = 2; p <= j; p+=2) {
            sum+=pow(2, p-1);
        }
        if (b < sum) {
            j-=2;
        }
        int k = 1;
        int l = 2;
        while (pow(2,k-1) <= b) {
            k+=2;
        }
        k-=2;
        sum = 0;
        for (int p = 1; p <= k; p+=2) {
            sum+=pow(2, p-1);
        }
        if (b < sum) {
            k-=2;
        }
        while (pow(2,l-1) <= a) {
            l+=2;
        }
        l-=2;
        sum = 0;
        for (int p = 2; p <= l; p+=2) {
            sum+=pow(2, p-1);
        }
        if (a < sum) {
            l-=2;
        }
        int cand1 = 1;
        int cand2 = 1;
        if (i < j) {
            cand1+=i;
        }
        else {
            if (j > 0) {
                cand1+=j;
            }
        }
        if (k < l) {
            cand2+=k;
        }
        else {
            if (l > 0) {
                cand2+=l;
            }
        }
        cout << max(cand1, cand2) << '\n';
    } 
    return 0;
}