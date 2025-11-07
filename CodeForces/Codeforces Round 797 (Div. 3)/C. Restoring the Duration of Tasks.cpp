
#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    for (int i = 0 ; i < t ;i++){
        int n ;
        cin>>n ;
        
        int t[n] = {0}, t1[n] = {0} ;
        for (int j = 0; j<n ;j++)
            cin>>t[j] ;
        int x = t[0] ;
        for (int j = 0; j<n ;j++){
            cin>>t1[j] ;
        }
        for (int j = 0; j<n ;j++){
            x = max(x, t[j]) ;
            cout<<t1[j] - x<<" " ;
            x = max(x, t1[j]) ;
        }
        cout<<endl ;
    }
}