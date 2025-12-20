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

#define fmap_int(k,v,m) for (map<int,int>::iterator it = (m).begin(); it != (m).end() && ((k=it->first)&&(v=it->second),1); ++it)
int n, k;

typedef vector<int> vi;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);
 
  int t = 1;
  cin >> t;
  for (int tt = 1; tt <= t; tt++) {
    cin >> n >> k;
    vi a(n);
    int ans = k + 1;
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      int cur = a[i];
      while (cur % k != 0) cur++;
      ans = min(ans, (cur - a[i]));
    }
    if (k == 4) {
      int p2 = 10;
      k = 2;
      for (int i = 0; i < n; ++i) {
        int cur = a[i];
        while (cur % k != 0) cur++;
        ans = min(ans, (cur - a[i]) + p2);
        p2 = min(p2, (cur - a[i]));
      }
    }
    cout << ans << '\n';
  }
}