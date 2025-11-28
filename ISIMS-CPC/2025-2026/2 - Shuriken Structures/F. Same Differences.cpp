#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define newL cout<<endl
#define ll long long
using namespace std ;
int t,n,m  ;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        unordered_map<long long, long long> cnt;
        cnt.reserve(n * 2);
        for (int i = 1; i <= n; ++i) {
            long long a; cin >> a;
            long long key = a - i;
            ++cnt[key];
        }
        long long ans = 0;
        for (auto &p : cnt) {
            long long c = p.second;
            ans += c * (c - 1) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}