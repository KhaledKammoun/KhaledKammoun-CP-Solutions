#include <bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;

int main() {
    int t;
    cin>>t ;
    for (int i = 0; i < t; i ++) {
        int n, m;
        int result = 0 ;
        cin>>n>>m ;
        for (int j = 0;j  < n; j++) {
            string s ;
            cin>>s ;
            m-=s.size() ;
            if (m >= 0) {
                result++ ;
            }
        }
        cout<<result<<endl;
    }
}


