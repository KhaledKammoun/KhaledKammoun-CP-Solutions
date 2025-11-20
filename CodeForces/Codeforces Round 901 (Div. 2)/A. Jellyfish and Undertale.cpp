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
    long long a, b;
    int n;
    cin >> a >> b >> n;
    vector<long long> tools(n);
    for(int i = 0; i < n; i++) cin >> tools[i];

    sort(tools.rbegin(), tools.rend()); // sort descending

    long long timer = b;
    long long seconds = 0;
    int i = 0;

    while (timer > 0) {
        // Use as many tools as possible to reach max timer a
        while (i < n && timer < a) {
            timer += tools[i];
            if (timer > a) timer = a;
            i++;
        }
        // One second passes
        timer--;
        seconds++;
    }

    cout << seconds << "\n";
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