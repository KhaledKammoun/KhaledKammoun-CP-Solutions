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


// NB. 
// Sum formula for any arithmetic progression is:
// S = (number of terms) * (first term + last term) / 2
//
// Exemple 1:
// First Term = 1
// Last Term = k
// Number of Terms = k
// S = k * ( 1 + k ) / 2
//
// Exemple 2: 
// First Term = n
// Last Term = n - k + 1
// Number of Terms = k
// S = k * ( n + (n - k + 1) ) / 2 = k * (2n - k + 1) / 2

void solve() {
    // int n; cin >> n;
    // vector<int> arr(n);
    // read_vector(arr,n);

    ll n, k, x ;
    cin >> n >> k >> x ;

    ll min_sum_of_first_k = k * (1 + k) / 2 ;

    ll max_sum_of_last_k = k * ((2 * n) - k + 1) / 2 ;

    if (x < min_sum_of_first_k || x > max_sum_of_last_k) {
        cout << "NO" << endl ;
        return ;
    } 

    cout << "YES" << endl ;
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