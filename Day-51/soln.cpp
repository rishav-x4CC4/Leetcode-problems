#include <iostream>
#include <vector>
#include <functional>
using namespace std;

class Solution {
public:
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);

        for (auto &e : invocations)
            adj[e[0]].push_back(e[1]);

        vector<bool> suspicious(n, false);

        function<void(int)> dfs = [&](int u) {
            suspicious[u] = true;
            for (int v : adj[u]) {
                if (!suspicious[v])
                    dfs(v);
            }
        };

        dfs(k);

        // If any non-suspicious method invokes a suspicious method,
        // no methods can be removed.
        for (auto &e : invocations) {
            int u = e[0], v = e[1];
            if (!suspicious[u] && suspicious[v]) {
                vector<int> ans;
                for (int i = 0; i < n; i++)
                    ans.push_back(i);
                return ans;
            }
        }

        vector<int> ans;
        for (int i = 0; i < n; i++) {
            if (!suspicious[i])
                ans.push_back(i);
        }

        return ans;
    }
};

int main() {
    int n, k, m;
    cin >> n >> k >> m;

    vector<vector<int>> invocations(m, vector<int>(2));

    for (int i = 0; i < m; i++)
        cin >> invocations[i][0] >> invocations[i][1];

    Solution obj;
    vector<int> ans = obj.remainingMethods(n, k, invocations);

    for (int x : ans)
        cout << x << " ";

    cout << endl;
    return 0;
}