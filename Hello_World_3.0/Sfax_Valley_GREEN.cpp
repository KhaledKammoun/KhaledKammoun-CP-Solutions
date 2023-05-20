#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n,q ;
    cin>>n>>q ;
    int t[100001] ;
    for (int i = 0 ; i<n ;i++)
        cin>>t[i+1] ;
    for (int i = 0 ; i<q ;i++){
        int a,b,c ;
        cin>>a>>b>>c ;
        if (a==1)
            t[b]=c ;
        else 
            cout<<abs(t[b]-t[c])<<endl ;
    }
}