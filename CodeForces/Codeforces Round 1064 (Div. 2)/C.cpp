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
    int n; cin >> n;
    vector<int> arr(n);
    read_vector(arr,n);

    int total = 0;


        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == arr[i + 1]) {
                total += arr[i];
                arr.erase(arr.begin() + i);
                n--;
                i = max(i - 1, 0);
            }
        }

        while (n > 1 && arr[0] == arr[n - 1]) {
            total += arr[0];
            arr.erase(arr.begin());
            n--;
        }


    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        int current = arr[i];

        for (int j = i + 1; j < n; j++) {
            if (arr[j] != current) {
                total += arr[j]; 
                break;
            }
        }
    }




    cout << total << endl;

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