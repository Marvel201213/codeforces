#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        vector<int> persona, personb;
        int xora{0}, xorb{0};
        int m = 0;
        for (int i = 0; i < n; ++i) {
            int number; cin >> number;
            persona.emplace_back(number);
            if (number > m) {
                m = number;
            }
        }
        for (int i = 0; i < n; ++i) {
            int number; cin >> number;
            personb.emplace_back(number);
            if (number > m) {
                m = number;
            }
        }
        int power = 0;
        while (1 << power <= m) {
            power+=1;
        }
        string winner = "Tie";
        for (int j = power; j >= 0; j-=1) {
            int xora{0}, xorb{0};
            int mask = 1 << j;
            for (int i = 0; i < n; ++i) {
                xora^= persona[i]&mask;
                xorb^= personb[i]&mask;
            }
            if (xora == xorb) {
                continue;
            }
            int lastinda = -1;
            int lastindb = -1;
            for (int i = 0; i < n; i+=2) {
                if ((persona[i]&mask) != (personb[i]&mask)) {
                    lastinda = i;
                }
            }
            for (int i = 1; i < n; i+=2) {
                if ((persona[i]&mask) != (personb[i]&mask)) {
                    lastindb = i;
                }
            }
            if (lastinda >= 0 && lastinda > lastindb) {
                winner = "Ajisai";
                break;
            }
            else if (lastindb >= 0 && lastindb > lastinda) {
                winner = "Mai";
                break;
            }
            else {
                if (xora > xorb ) {
                    winner = "Ajisai";
                    break;
                }
                else {
                    winner = "Mai";
                    break;
                }
            }
        }
        std::cout << winner << '\n';
        
    }

    return 0;  
}