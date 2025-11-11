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

void solve(int index) {
    int n; cin >> n;
    vector<int> arr(n);
    read_vector(arr,n);

    int lastDiff = (n > 1 ?  arr[n - 1] - arr[n - 2] : 0);
    int mn = *min_element(arr.begin(), arr.end());
    int result = max(mn, lastDiff);


    cout << "Case #"<<index<<": "<< result << endl;
}

int main() {
    fast_io;

    int t = 1, i = 1;
    cin >> t;
    while (t--) {
        solve(i);
        i++;
    }


    return 0;
}