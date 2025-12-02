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
#define f1(i,n) for (int i = 1; i < n; i++)
#define fmap(k,v,m) for (auto &[k,v] : m)

void solve() {
    int n, q; cin >> n >> q;
    vector<int> arr(n);
    read_vector(arr,n);

    vector<int> odd_count(n + 2, 0);
    odd_count[0] = 0;
    for (int i = 1; i <= n; i++) {
        odd_count[i] = odd_count[i - 1] + (arr[i - 1] % 2 != 0 ? 1 : 0);
    }

    while (q--) {
        int l, r, k; cin >> l >> r >> k;
        int count_odd = odd_count[r] - odd_count[l - 1];
        int total_odd_count = odd_count[n] - (k % 2 == 0 ? count_odd : -(r - l + 1 - count_odd));

        if (total_odd_count % 2 != 0) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

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