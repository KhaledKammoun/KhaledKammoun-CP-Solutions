#include <bits/stdc++.h>
using namespace std;

//--------------------Macros & Typedefs--------------------
#define FAST ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define ll long long
#define ld long double

//--------------------Constants----------------------------
const ll MOD = 1e9 + 7;
// const int MOD = 998244353; // Uncomment if needed
const int N = 505;
const ll INF = 1e18;
const ll MIN = -1e18;
const ll PRIME = 1000003;
unordered_map<int, long long> dp;

long long sumDigits(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
    
//--------------------Solution Function--------------------
void solve() {
    int n;
    cin >> n;
    

   vector<ll> A(n + 1);
    A[0] = 1;
    ll sum_f = A[0];
    
    for (int i = 1; i <= n; i++) {
        A[i] = sum_f;
        sum_f += sumDigits(A[i]);
    }
    
    cout << A[n] << endl;
}

//--------------------Main Function------------------------
int main() {
    FAST;

    int t = 1;
    // cin >> t; // Uncomment for multiple test cases
    while (t--) {
        solve();
    }

    return 0;
}

//--------------------Notes & Reminders-------------------
// 1. Check for integer overflows
// 2. Watch array/vector bounds
// 3. Handle special cases (e.g., n=1)
// 4. Stay organized and avoid getting stuck on one approach
// 5. Consider thinking backwards if necessary