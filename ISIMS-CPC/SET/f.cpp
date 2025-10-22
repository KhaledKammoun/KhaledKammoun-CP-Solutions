#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, c, d;
    cin >> n >> c >> d;
    vector<ll> arr(n * n);
    for (auto &x : arr) cin >> x;

    sort(all(arr));
    ll base = arr[0];

    unordered_map<ll, int> freq;
    for (auto x : arr) freq[x]++;

    bool ok = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            ll expected = base +  i * c +  j * d;
            if (freq[expected] == 0) {
                ok = false;
                break;
            }
            freq[expected]--;
        }
        if (!ok) break;
    }

    cout << (ok ? "YES" : "NO") << endl;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
}
