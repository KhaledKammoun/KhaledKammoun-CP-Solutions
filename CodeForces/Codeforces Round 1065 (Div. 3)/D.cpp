#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  for (int tt = 0; tt < t; tt++) {
    int n;
    cin >> n;
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
      cin >> p[i];
    }
    vector<int> suf_max(n + 2, 0);
    for (int i = n; i >= 1; i--) {
      suf_max[i] = max(p[i], suf_max[i + 1]);
    }
    long long cur_min = LLONG_MAX / 2;
    bool yes = true;
    for (int i = 1; i <= n; i++) {
      if (p[i] < cur_min) {
        if (cur_min != LLONG_MAX / 2) {
          int nextm = (i < n) ? suf_max[i + 1] : 0;
          if (nextm <= (int)cur_min) {
            yes = false;
          }
        }
        cur_min = p[i];
      }
    }
    cout << (yes ? "Yes\n" : "No\n");
  }
}