#include <iostream>
#include <vector>
using namespace std;
int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        vector<int> persona, personb;
        int xora{0}, xorb{0};
        for (int i = 0; i < n; ++i) {
            int number; cin >> number;
            persona.emplace_back(number);
            xora^=number;
        }
        for (int i = 0; i < n; ++i) {
            int number; cin >> number;
            personb.emplace_back(number);
            xorb^=number;
        }
        if (xora == xorb) {
            cout << "Tie" << '\n'; 
            continue;
        }
        int lastinda = -1;
        int lastindb = -1;
        for (int i = 0; i < n; i+=2) {
            if (persona[i] != personb[i]) {
                lastinda = i;
            }
        }
        for (int i = 1; i < n; i+=2) {
            if (persona[i] != personb[i]) {
                lastindb = i;
            }
        }
        if (lastinda >= 0 && lastinda > lastindb) {
            std::cout << "Ajisai" << '\n';
        }
        else if (lastindb >= 0 && lastindb > lastinda) {
            std::cout << "Mai" << '\n';
        }
        else {
            if (xora > xorb ) {
                std::cout << "Ajisai" <<'\n';
            }
            else {
                std::cout << "Mai" << '\n';
            }
        }
    }

    return 0;  
}