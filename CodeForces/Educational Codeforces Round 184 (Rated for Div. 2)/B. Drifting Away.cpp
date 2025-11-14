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
    // vector<int> arr(n);
    // read_vector(arr,n);

    string s ;
    cin >> s ;

    if (s.size() == 1) {
        cout << 1 << endl ;
        return ;
    }

    f0(i, s.size() - 1) {
        if (s[i] == '*' && (s[i+1] == '*' || s[i+1] == '<')) {
            cout << -1 << endl ;
            return ;
        }

        if (s[i] == '>'  && (s[i + 1] == '*' || s[i + 1] == '<')) {
            cout << -1 << endl ;
            return ;
        }

    }

   int n = s.size();

    vector<int> len_left(n);
    len_left[0] = (s[0] == '>') ? 0 : 1;
    for (int i = 1; i < n; ++i) {
        if (s[i] == '>') {
            len_left[i] = 0;
        } else {
            len_left[i] = 1 + len_left[i - 1];
        }
    }


    vector<int> len_right(n);
    len_right[n - 1] = (s[n - 1] == '<') ? 0 : 1;
    for (int i = n - 2; i >= 0; --i) {
        if (s[i] == '<') {
            len_right[i] = 0;
        } else {
            len_right[i] = 1 + len_right[i + 1];
        }
    }


    int max_time = 0;
    for (int i = 0; i < n; ++i) {
        int current_time = 0;

        if (s[i] == '<') {
            current_time = len_left[i];
        } else if (s[i] == '>') {
            current_time = len_right[i];
        } else { 
            current_time = max(len_left[i], len_right[i]);
        }

        max_time = max(max_time, current_time);
    }

    cout << max_time << "\n";
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