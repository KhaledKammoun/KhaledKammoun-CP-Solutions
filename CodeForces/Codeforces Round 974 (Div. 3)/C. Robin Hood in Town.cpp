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

// ----------------- Solution -----------------
// NB.
// Avg / 2 > mid  =>  Avg > 2 * mid
// Avg = total / n
// total / n > 2 * mid
// total > 2 * mid * n
// with x added to total
// total + x > 2 * mid * n
// x > 2 * mid * n - total


void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    read_vector(arr,n);

    if (n <= 2) {
        cout << -1 << endl;
        return;
    }

    sort(arr.begin(), arr.end());
    
    long long total = 0 ;
    f0(i, n) {
        total += arr[i];
    }

    long long result = max((ll) 0, 2LL * n * arr[n / 2] - total + 1) ;

    cout << result << endl;
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