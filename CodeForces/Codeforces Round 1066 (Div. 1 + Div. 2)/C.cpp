#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k, q;
    cin >> n >> k >> q;

    vector<int> inMin(n, 0);
    vector<int> inMex(n, 0);

    vector<pair<int,int>> MIN_list;

    for (int i = 0; i < q; i++) {
        int c, l, r;
        cin >> c >> l >> r;
        l--, r--;

        if (c == 1) {
            MIN_list.push_back({l, r});
            for (int j = l; j <= r; j++) inMin[j] = 1;
        } else {
            for (int j = l; j <= r; j++) inMex[j] = 1;
        }
    }

    vector<int> res(n, k + 1);

    for (auto &p : MIN_list) {
        int L = p.first, R = p.second;
        for (int i = L; i <= R; i++) {
            if (!inMex[i]) {
                res[i] = k;
                break;
            }
        }
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (!inMin[i]) {
            res[i] = cnt % k;
            cnt++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << res[i] << (i + 1 < n ? " " : "\n");
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}