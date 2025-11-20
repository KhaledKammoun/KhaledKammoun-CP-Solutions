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
    int n; 
    cin >> n;
    vector<int> a(n), b(n);
    read_vector(a,n);
    read_vector(b,n);

    int nb_one_a = 0 ;
    int nb_one_b = 0 ;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) { // Ajisai's turn
          if (a[i] == 0 && b[i] == 1) nb_one_a++;
          if (a[i] == 1 && b[i] == 0) nb_one_a++;
          if (a[i] == 1 && b[i] == 1) {
            nb_one_a++;
            nb_one_b++;
          }
        } else { // Mai's turn
            if (a[i] == 0 && b[i] == 1) nb_one_b++;
            if (a[i] == 1 && b[i] == 0) nb_one_b++;
            if (a[i] == 1 && b[i] == 1) {
                nb_one_b++;
                nb_one_a++;
            }
        }
    }

    cout << "NB A : " << nb_one_a << " NB B : " << nb_one_b << endl ;
    

    if (nb_one_a > nb_one_b) cout << "Ajisai" << endl;
    else if (nb_one_a < nb_one_b) cout << "Mai" << endl;
    else cout << "Tie" << endl;
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