#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> l(n);
        for (int i = 0; i < n; i++) cin >> l[i];

        // l1 (unique) + inL1 pour test O(1)
        vector<char> inL1(n + 1, false);
        vector<int> uniq;
        uniq.reserve(n);
        for (int x : l) {
            if (1 <= x && x <= n && !inL1[x]) {
                inL1[x] = true;
                uniq.push_back(x);
            }
        }

        // divs[i] = liste des d dans l1 tels que d | i (d >= 2)
        vector<vector<int>> divs(n + 1);
        for (int d : uniq) {
            if (d <= 1) continue;
            for (int x = d; x <= n; x += d) {
                divs[x].push_back(d);
            }
        }

        vector<int> visited(n + 1, 0); // 0 = pas calculé, sinon valeur du dfs

        function<int(int)> dfs = [&](int i) -> int {
            if (visited[i] != 0) return visited[i];
            if (inL1[i]) {
                visited[i] = 1;
                return 1;
            }

            int m = n + 1;
            for (int d : divs[i]) {
                int r = dfs(i / d);
                if (r < m) m = r;
            }

            if (m == n + 1) {
                visited[i] = n + 1;
                return n + 1;
            }

            visited[i] = m + 1;
            return visited[i];
        };

        for (int i = 1; i <= n; i++) {
            int r = dfs(i);
            cout << (r == n + 1 ? -1 : r) << (i == n ? '\n' : ' ');
        }
    }

    return 0;
}