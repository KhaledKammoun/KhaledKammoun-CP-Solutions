#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main() {
    int t;
    cin>>t ;
    for (int i = 0; i < t; i ++) {
        int n;
        cin>>n;
        int total = 0 ;
        for (int j = 0;j  < n; j++) {
            int m ;
            cin>>m ;
            total+=m ;
        
        }
        cout<<((total % n) == 0 ? "YES" : "NO")<<endl;
    }
}


