#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ull unsigned long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define endl '\n'
#define MOD 1000000007LL

// Author: Ayman Feki
// Github: https://github.com/Ayman-ing

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
    string s;
    cin >> s;
    int n = s.size();
    if(n==1) {
        cout << 1 << endl;
        return;
    }
    if(s[0]=='>'){
        int i = 0;
        while(i<n && s[i]=='>')i++;
        if(i>=n) cout << n << endl;
        else cout << -1 << endl;
        return;
    }
    if(s[0]=='*' && s[1]=='>'){
        int i = 1;
        while(i<n && s[i]=='>')i++;
        if(i>=n) cout << n << endl;
        else cout << -1 << endl;
        return;
    }
    if(s[n-1]=='<'){
        int i = n-1;
        while(i>=0&& s[i]=='<')i--;
        if(i<0) cout << n << endl;
        else cout << -1 << endl;
        return;
    }
    if(s[n-1]=='*' && s[n-2]=='<'){
        int i = n-2;
        while(i>=0 && s[i]=='<')i--;
        if(i<0) cout << n << endl;
        else cout << -1 << endl;
        return;
    }
    int count = 0;
    f(i,0,n){
        if(s[i]=='*') count++;
    }
    if(count==0){
        int i = 0;
        while(i<n && s[i]=='<') i++;
        int j = i;
        while(j<n && s[j]=='>') j++;
        if(j==n){
            int ans = max(i,n-i);
            cout << ans << endl;
            return;
        }
    

    }
    if(count==1){
        if(s[0]!='*' && s[n-1]!='*'){
        int i = 0;
        while(i<n && s[i]=='<') i++;
        i++;
        int j= i;

        while(j<n && s[j]=='>') j++;
        if(j==n){
            int ans = max(i,n-i+1);
            cout << ans << endl;
            return;
        }
        }

    }

    cout << -1 << endl;
    return;

}


int main() {
    fast_io;

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}