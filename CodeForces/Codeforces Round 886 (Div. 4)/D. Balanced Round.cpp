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
    int n, k; cin >> n >> k;
    vector<int> arr(n);
    read_vector(arr,n);

    sort(all(arr));
    vector<int> consecutive_count(n, 1);
    f1(i, n) {
        if (abs(arr[i] - arr[i - 1]) <= k) {
            consecutive_count[i] = consecutive_count[i - 1] + 1;
        }
    }

    int max_count = 1;
    int index_of_max = 0;
    f0(i, n) {
        if (consecutive_count[i] > max_count) {
            max_count = consecutive_count[i];
            index_of_max = i;
        }
    }

    int index_start = index_of_max;

    while (index_start > 0 && consecutive_count[index_start] != 1) {
        index_start--;
    }

    cout << max(0, n - (index_of_max - index_start + 1)) << endl;
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