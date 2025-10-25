#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define newL cout << endl;
#define ll long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int a_total = 0, b_total = 0;
        
        vector<int> dp(n + 1, 0) ;
        for (int i = 1; i < n + 1; i++) {
            dp[i] = max(dp[i], dp[i - 1] + a[i - 1] - (i < n ? b[i] : 0)) ;
            dp[i] = max(dp[i], dp[i - 1]) ;
        }
        cout<<dp[n]<<endl;
    }
    return 0;
}
