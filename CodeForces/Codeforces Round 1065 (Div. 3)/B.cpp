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
    int n; cin >> n;
    vector<int> arr(n);
    read_vector(arr,n);


    f1(i,n - 1) {
            if (arr[i] == -1) arr[i] = 0;
    }

    if (arr[0] == -1 && arr[n - 1] == -1) {

        arr[0] = 0 ;
        arr[n - 1] = 0 ;
    }  else  if (arr[0] == -1 || arr[n - 1] == -1) {
        if (arr[0] == -1) {
            arr[0] = arr[n - 1] ;
        } else {
            arr[n - 1] = arr[0];
        }
    } 

    int totalCost = 0;
    f0(i,n - 1) {
        totalCost += arr[i + 1] - arr[i];
    }
    cout << abs(totalCost) << endl;

    print_vector(arr) ; 
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