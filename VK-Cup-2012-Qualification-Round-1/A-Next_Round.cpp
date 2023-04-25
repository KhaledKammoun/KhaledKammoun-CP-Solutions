#include <bits/stdc++.h>
using namespace std ;
int main(){
    int sum=0 ;
    int n,k ;
    cin>>n>>k ;
    int t[n]={-1} ;
    for (int i = 0 ; i<n ;i++){
        int x ;
        cin>>x ;
        t[i]=x ;
    }
    for (int i = 0 ; t[i]!=0 &&(i<k || t[k-1]==t[i] ); i++){
        if (t[k-1]<=t[i])
            sum++ ;
    }
    cout<<sum ;
    return 0 ;
}