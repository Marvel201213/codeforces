#include <iostream>
#include <queue>
#include <map>
#include <vector>
#include <set>

using namespace std;

int main () {
    int n, m,k; cin >> n >> m >> k;
    vector<int> output, types;
    vector<bool> vis;
    for(int i = 0; i < k; ++i) {
        output.emplace_back(-1);
    }
    for (int i =0; i < n; ++i) {
        int number; cin >> number;
        if (i!=0) {
            vis.emplace_back(false);
        }
        else {
            vis.emplace_back(true);
        }
        types.emplace_back(number);
    }
    vector<vector<int>> graph;
    for (int i =0; i < n; ++i) {
        graph.emplace_back(vector<int>{});
    }
    for (int i = 0; i < m; ++i) {
        int u,v; cin >> u >> v;
        graph[u-1].emplace_back(v);
        graph[v-1].emplace_back(u);
    }
    queue<int> trav;
    trav.push(1);
    int level = 0;
    while (!trav.empty()) {
        int length = trav.size();
        for (int i = 0; i < length; ++i) {
            int curr = trav.front();
            trav.pop();
            output[types[curr-1]-1] = level;
            for (int node : graph[curr-1]) {
                if (! vis[node-1]) {
                    trav.push(node);
                    vis[node-1] = true;
                }
            }
        }
        level+=1;
    }
    for (int i = 0; i < k; ++i ) {
        if (i != k-1) {
            cout << output[i] << " ";
        }
        else {
            cout << output[i] << '\n';
        }
    }
    return 0;
}