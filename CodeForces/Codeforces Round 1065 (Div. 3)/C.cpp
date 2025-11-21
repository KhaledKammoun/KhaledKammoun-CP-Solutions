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
    int n; 
    cin >> n;
    vector<int> a(n), b(n);
    read_vector(a,n);
    read_vector(b,n);
    
    vector<int> diff_indices;
    f0(i,n) {
        if (a[i] != b[i]) {
            diff_indices.pb(i);
        }
    }

    int nb_diff = diff_indices.size();

    if (nb_diff % 2 == 0) {
        cout << "Tie" << endl;
        return;
    }

    int last_diff_index = diff_indices.back();

    if (last_diff_index % 2 == 0) {
        cout << "Ajisai" << endl;
    } else {
        cout << "Mai" << endl;
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