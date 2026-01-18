#include <iostream>
#include <map>
#include <string>
#include <set>
#include <tuple>
#include <vector>
#include <cmath>
using namespace std;
int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n, m, k; cin >> n >> m >> k;
        set<int> robots;
        map<int, vector<int>> lbounds;
        map<int, vector<int>> rbounds;
        vector<bool> lives(n,false);
        //make two maps with key as each bound and then value as the specific robot
        for (int i =0; i < n; ++i) {
            int number; cin >> number;
            robots.insert(number);
            lives[number] = true;
        }
        set<int> spikes;
        for (int i =0; i < m; ++i) {
            int number; cin >> number;
            spikes.insert(number);
        }
        for (int i = 0; i < pow(10,9)+1; ++i) {
            int loc = i;
            if (spikes.find(i) != spikes.end()) {
                while (i+1 > n && spikes.find(i+1) != spikes.end()) {
                    i+=1;
                    if (robots.find(i) != robots.end()) {
                        if (lbounds.find(i-loc) == lbounds.end()) {
                            lbounds[i-loc] = vector<int>{i};
                        }
                        else {
                            lbounds[i-loc].emplace_back(i);
                        }
                    }
                }
                i = loc;
            }
            else if (robots.find(i) != robots.end()) {
                while (i+1 < n) {
                    i+=1;
                    if (spikes.find(i) != spikes.end()) {
                        if (rbounds.find(i-loc) == rbounds.end()) {
                            rbounds[i-loc] = vector<int>{i};
                        }
                        else {
                            rbounds[i-loc].emplace_back(i);
                        }
                        break;
                    }
                }
                i = loc;
            }
        }
        string moves; cin >> moves;
        int abs = 0;
        int alive = n;
        for (int i = 0; i < moves.size(); ++i) {
            if (moves[i] == 'L') {
                abs-=1;
            }
            else {
                abs+=1;
            }
            for (int j: lbounds[abs]) {
                if (lives[j]) {
                    lives[j] = false;
                    alive-=1;
                }
            }
            lbounds.erase(abs);
            for (int j: rbounds[abs]) {
                if (lives[j]) {
                    lives[j] = false;
                    alive-=1;
                }
            }
            rbounds.erase(abs);
            cout << alive << '\n';
        }
    }
    return 0;
}