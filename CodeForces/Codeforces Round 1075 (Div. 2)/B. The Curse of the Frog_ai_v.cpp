// ----------------- Competitive Programming Template -----------------
// Author: Khaled Kammoun
// ... 

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define endl '\n'
#define f0(i,n) for (int i = 0; i < n; i++)

void solve() {
    ll n, x; 
    cin >> n >> x;

    ll sum_ = 0;
    ll max_v = -2e18; // Initialize with a very small number to handle cases where all v are negative

    // CRITICAL FIX: Read ALL inputs for the test case before making any decisions
    f0(i, n) {
        ll a, b, c;
        cin >> a >> b >> c;

        // Add the distance from free jumps (b-1 jumps of size a)
        // b is guaranteed to be >= 1, so b-1 >= 0.
        sum_ += a * (b - 1);

        // Calculate the gain per rollback for this jump type
        // Gain = (jump after rollback) + (next batch of free jumps) - (rollback distance)
        // Gain = a + a*(b-1) - c = a*b - c
        ll v = a * b - c;
        if (v > max_v) {
            max_v = v;
        }
    }

    // If initial free jumps are enough to reach x
    if (sum_ >= x) {
        cout << 0 << endl;
        return;
    }

    // If we can't reach x and no rollback provides positive gain
    if (max_v <= 0) {
        cout << -1 << endl;
        return;
    }

    // Calculate minimum rollbacks needed
    // We need to cover the gap (x - sum_) using steps of size max_v
    ll gap = x - sum_;
    ll ans = (gap + max_v - 1) / max_v; // Ceiling division
    
    cout << ans << endl;
}

int main() {
    fast_io;
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}