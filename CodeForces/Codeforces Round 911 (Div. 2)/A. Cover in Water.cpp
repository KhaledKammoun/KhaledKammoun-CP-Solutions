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
    int n; cin >> n;
    vector<char> arr(n);
    read_vector(arr,n);

    int max_sub_len = 0 ;
    int curr_len = 0 ;

    int nb_dots = 0 ;

    f0(i,n) {
        if (arr[i] == '.') {
            curr_len++;
            nb_dots++;
        } else {
            max_sub_len = max(max_sub_len, curr_len);
            curr_len = 0;
        }


    }
    if (curr_len > 0) {
        max_sub_len = max(max_sub_len, curr_len);
    }

    if (max_sub_len <= 2) {
        cout << nb_dots << endl;
    } else if (nb_dots > 0) {
        cout << 2 << endl;
    } else {
        cout << 0 << endl ;
    }
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
};