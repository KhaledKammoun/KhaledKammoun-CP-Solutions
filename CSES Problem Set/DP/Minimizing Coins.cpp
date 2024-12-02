#include <bits/stdc++.h>
using namespace std ;

int main() {
    int n, x ;
    cin>>n>>x ;
    vector<int> coins(n) ;
    for (int i = 0; i < n; i++) {
        cin>>coins[i];
    }

   vector<int> dp(x + 1, INT_MAX) ;
   dp[0] = 0 ;
   for (int i = 1; i <= x; i++) {
        for (auto coin : coins) {
            if (i -coin >= 0 && dp[i - coin] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coin] + 1) ;

            }
        }
   }

    cout << (dp[x] == INT_MAX ? -1 : dp[x]) << endl;



}
