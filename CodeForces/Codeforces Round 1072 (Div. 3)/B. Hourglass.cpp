// ----------------- Competitive Programming Template -----------------
// Author: Khaled Kammoun
// GitHub: https://github.com/KhaledKammoun
// LinkedIn: https://www.linkedin.com/in/khaled-kammoun-6b1059308/
// #FREE_PALESTINE
// #STOP_GENOCIDE_IN_GAZA
// -------------------------------------------------------------------
// Problem: B. Hourglass
// -------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
using ll = long long;

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        ll s, k, m;
        cin >> s >> k >> m;

        ll flips = m / k;
        ll r = m % k;

        ll sand;
        if (k < s) {
            // After each flip, sand amount alternates: s -> k -> s -> k ...
            sand = (flips % 2 == 0 ? s : k);
            // Here r < k < s, so sand is always >= r
            cout << (sand - r) << '\n';
            continue;
        } else {
            // Sand always finishes before the next flip, so after any flip it's fully reset to s
            sand = s;
        }

        ll ans = sand - r;
        if (ans < 0) ans = 0;
        cout << ans << '\n';
    }
    return 0;
}
