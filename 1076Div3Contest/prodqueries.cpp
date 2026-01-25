#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;


vector<int> sieve;
vector<int> bigdogs;

void dfs (int prod, int index, int ops) {
    if (sieve[prod] == -1 || sieve[prod] >= ops) {
        sieve[prod] = ops;
    } else {
        return;
    }
    if (index < 0) {
        return;
    }
    if (bigdogs[index] == 1) {
        sieve[1] = 1;
        return;
    }
    if (prod == 0) {
        dfs(bigdogs[index], index, ops+1);
        dfs(0, index-1, ops);
    }
    else {
        if ((sieve.size()-1)/prod ==1) {
            return;
        } else if ((sieve.size()-1)/prod< bigdogs[index]) {
            dfs(prod, index-1, ops);
        }
        else {
            dfs(bigdogs[index] * prod, index, ops+1);
            dfs(prod, index-1, ops);
        }
    }
    return;
}

int main () {
    int T; cin >> T;
    for (int CASES = 0; CASES < T; ++CASES) {
        int n; cin >> n;
        set<int> store;
        for (int i = 0; i < n; ++i) {
            int number; cin >> number;
            store.insert(number);
        }
        bigdogs.resize(store.size());
        int i = 0;
        for (const auto& element : store) {
            bigdogs[i] = element;
            i+=1;
        }
        sort(bigdogs.begin(), bigdogs.end());
        sieve.resize(n+1);
        fill(sieve.begin(), sieve.end(), -1);
        dfs(0, store.size()-1, 0);
        for (int i = 1; i <=n; ++i) {
            if (i !=n) {
                cout << sieve[i] << " ";
            }
            else {
                cout << sieve[i] << '\n';
            }
        }
    }
    return 0;
}