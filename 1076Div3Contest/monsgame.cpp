#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        vector<int> swords;
        vector<int> boss;
        for (int i = 0; i < n; ++i) {
            int number; cin >> number;
            swords.emplace_back(number);
        }
        int running = 0;
        int lev_count = n;
        for (int i = 0; i < n; ++i) {
            int number; cin >> number;
            boss.emplace_back(number);
            running+=number;
        }
        long long max = 0;
        int curr_swords = n;
        sort(swords.begin(), swords.end());
        int i =0;
        while (i < n) {
            long long diff = swords[i];
            while (curr_swords < running) {
                running-= boss[lev_count-1];
                lev_count-=1;
            }
            if (lev_count * diff > max) {
                max = lev_count * diff;
            }
            while (i <n && swords[i] == diff) {
                i+=1;
                curr_swords-=1;
            }
        }
        cout << max << '\n';
    }
    return 0;
}