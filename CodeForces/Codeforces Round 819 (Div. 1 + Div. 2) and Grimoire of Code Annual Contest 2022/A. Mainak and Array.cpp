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
    int n; cin >> n;
    vector<int> arr(n);
    read_vector(arr,n);

    if (n == 1) {
        cout << 0 << endl;
        return;
    }

    int min_val = *min_element(arr.begin(), arr.end() - 1);
    int max_val = *max_element(arr.begin() + 1, arr.end());

    int val_1 = arr[n - 1] - arr[0] ;
    int val_2 = arr[n - 1] - min_val;
    int val_3 = max_val - arr[0];
    int val_4 = 0;
    f0(i,n-1) {
        val_4 = max(val_4, arr[i] - arr[i + 1]);
    }

    int result = max({val_1, val_2, val_3, val_4});

    cout << result << endl;
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