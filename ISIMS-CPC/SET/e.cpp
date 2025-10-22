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
    // int n; cin >> n;
    string s ;
    getline(cin, s) ;
    if (s.size() < 2) {
        cout << -1 << endl ;
        return ;
    }
    for (int i = 1; i < s.size(); i++) {
        if (s[i] == s[i - 1]) {
            cout << string(2, s[i]) << endl;
            return ;
        }
        if (i >= 2 && s[i] != s[i - 1] && s[i - 1] != s[i - 2] && s[i] != s[i - 2]) {
            cout << s.substr(i - 2, 3) << endl;
            return ;
        }
    }

    cout << -1 << endl ;
}

int main() {
    fast_io;

    int t = 1;
    cin >> t; // uncomment if multiple test cases
    cin.ignore(); 

    while (t--) {
        solve();
    }

    return 0;
};