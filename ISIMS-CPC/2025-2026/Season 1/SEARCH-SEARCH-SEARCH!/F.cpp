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

int calculate_avg(vector<int> &arr) {
    int sum = 0 ;
    f0(i, arr.size()) {
        sum += arr[i];
    }
    return sum / arr.size();
}

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    read_vector(arr,n);

    sort(arr.begin(), arr.end());
   int x = 0 ; 
    if (n <= 2) {
        cout << -1 << endl;
        return;
    }

    int mid = n / 2;
    while (calculate_avg(arr) <= arr[mid] || (calculate_avg(arr) / 2) <= mid) {
        x++ ;
        arr[n - 1]++ ;
    }
    cout << x << endl;
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