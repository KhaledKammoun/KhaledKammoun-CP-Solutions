
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t ;
    for (int i = 0; i < t; i ++) {
        int n ;
        cin>>n ;
        vector<int> a(n + 1) ;
        for (int j = 0; j < n ;j++) {
            cin>>a[j] ;
        }
        vector<int> b(n + 1) ;
        for (int j = 0; j < n ; j++) {
            int count = 0 ; 
            for (int k = 0; k < j ; k++) {
                count += a[j] == b[k] ? 1 : 0 ;
            }
            if (count >= j + 1)  {
                b[j] = i+1 < n ? a[j+1] : a[j] ;
            }else {
                b[j] = a[j] ;
            }
        }
                for (int j = 0; j < n ; j++) {
                cout<<b[j]<<" " ;
                }cout<<endl;

    }
}
 