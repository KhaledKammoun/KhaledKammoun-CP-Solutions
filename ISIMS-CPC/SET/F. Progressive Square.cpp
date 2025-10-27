#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ull unsigned long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define endl '\n'
#define MOD 1000000007LL

// ----------------- Macros -----------------
#define read_vector(v,n) for (int i = 0; i < n; i++) cin >> v[i];
#define print_vector(v) for (auto &x : v) cout << x << ' '; cout << endl;
#define print_vector_pair(v) for (auto &[first, second] : v) cout << first << " " << second << endl;
#define print_map(m) for (auto &[k,v] : m) cout << k << ": " << v << endl;

#define f(i,x,n) for (int i = x; i < n; i++)
#define f0(i,n) for (int i = 0; i < n; i++)
#define f1(i,n) for (int i = 1; i <= n; i++)
#define fmap(k,v,m) for (auto &[k,v] : m)

void solve() {
    int n, c, d;
    cin >> n >> c >> d;
    vector<ll> arr(n * n);
    for (auto &x : arr) cin >> x;

    ll max_val = *max_element(all(arr));
    ll base = max_val - (c * (n - 1) + d * (n - 1));

    multiset<ll> S(arr.begin(), arr.end());

    auto it = S.find(base);
    if (it == S.end()) {
        cout << "NO" << endl;
        return;
    }
    S.erase(it);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) continue;
            ll expected = base + i * c + j * d;
            auto it2 = S.find(expected);
            if (it2 == S.end()) {
                cout << "NO" << endl;
                return;
            }
            S.erase(it2);
        }
    }

    cout << "YES" << endl;
}

int main() {
    fast_io;

    int t = 1;
    cin >> t; // uncomment if multiple test cases
    while (t--) {
        solve();
    }

    return 0;
}