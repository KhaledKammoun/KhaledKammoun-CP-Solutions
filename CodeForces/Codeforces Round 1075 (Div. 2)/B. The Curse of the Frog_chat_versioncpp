#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin >> n >> x;
        ll ans = LLONG_MAX;
        bool possible = false;

        for (int i = 0; i < n; i++) {
            ll a, b, c;
            cin >> a >> b >> c;

            ll base = a * (b - 1);
            if (x <= base) 
                ans = min(ans, 0LL);

            ll gain = a * b - c;
            if (gain > 0) {
                possible = true;
                ll need = max(0LL, x - base);
                ll rolls = (need + gain - 1) / gain; 
                ans = min(ans, rolls);
            }
        }

        if (ans == LLONG_MAX)
            cout << -1 << '\n';
        else
            cout << ans << '\n';
    }
    return 0;
}