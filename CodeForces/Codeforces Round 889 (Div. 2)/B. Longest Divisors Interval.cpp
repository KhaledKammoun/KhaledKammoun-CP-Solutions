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
    long long n; cin >> n;
    // vector<int> arr(n);
    // read_vector(arr,n);

    int max_interval = 0;

    for (long long left = 1; left <= 1000; left++) {
        int current_interval = 0;
        for (long long right = left; right <= 1000; right++) {
            if (n % right == 0) {
                current_interval++;
            } else {
                max_interval = max(max_interval, current_interval);
                left = right ;
                break ;
            }
        }
    }
    

    cout << max_interval << endl;
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

// Version 2 FROM AI :
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long

// vector<ll> getDivisors(ll n) {
//     vector<ll> divs;
//     for (ll i = 1; i * i <= n; i++) {
//         if (n % i == 0) {
//             divs.push_back(i);
//             if (i != n / i) divs.push_back(n / i);
//         }
//     }
//     sort(divs.begin(), divs.end());
//     return divs;
// }

// void solve() {
//     ll n;
//     cin >> n;
//     vector<ll> divs = getDivisors(n);

//     ll max_interval = 1;
//     ll current_interval = 1;

//     for (size_t i = 1; i < divs.size(); i++) {
//         if (divs[i] == divs[i-1] + 1) {
//             current_interval++;
//         } else {
//             current_interval = 1;
//         }
//         max_interval = max(max_interval, current_interval);
//     }

//     cout << max_interval << '\n';
// }

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;
//     while (t--) solve();
// }
