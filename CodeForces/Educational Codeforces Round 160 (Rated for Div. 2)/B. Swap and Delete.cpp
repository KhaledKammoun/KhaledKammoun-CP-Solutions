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
    // int n; cin >> n;
    // vector<int> arr(n);
    // read_vector(arr,n);

    string s ;
    cin >> s ;

    int n = s.size() ;

    if (n == 1) {
        cout << 1 << endl ;
        return ;
    }
    int nb_zero = 0 ;
    int nb_one = 0 ;

    f0(i,n) {
        if (s[i] == '0') {
            nb_zero++ ;
        } else {
            nb_one++ ;
        }
    }

    if (nb_one == nb_zero) {
        cout << 0 << endl ;
        return ;
    }

    int nb_diff = 0 ;
    f0(i,n) {
        if (s[i] == '0' && nb_one > 0) {
            nb_diff++ ;
            nb_one-- ;
        } else if (s[i] == '1' && nb_zero > 0) {
            nb_diff++ ;
            nb_zero-- ;
        } else {
            break ;
        }
    }

    cout << n - nb_diff << endl ;
    return ;
    


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