#include <iostream>
#include <vector>
#include <tuple>
#include <set>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        vector<int> heads;
        vector<int> torsos;
        vector<int> legs;
        for (int i =0; i < n; ++i) {
            int number; cin >> number;
            heads.emplace_back(number);
        }
        for (int i =0; i < n; ++i) {
            int number; cin >> number;
            torsos.emplace_back(number);
        }
        for (int i =0; i < n; ++i) {
            int number; cin >> number;
            legs.emplace_back(number);
        }
        long long tracker = 0;
        bool flag;
        for (int i = 0; i < n; ++i) {
            flag = true;
            for (int j = 0; j < n; ++j) {
                if (legs[j]<= torsos[(i+j)%n]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                tracker+=1;
            }
        }
        long long output = 0;
        for (int i = 0; i < n; ++i) {
            flag = true;
            for (int j = 0; j < n; ++j) {
                if (torsos[j]<= heads[(i+j)%n]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                output+=n*tracker;
            }
        }
        cout << output << '\n';

    } 
    return 0;
}