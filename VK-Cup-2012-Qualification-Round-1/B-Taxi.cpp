#include <bits/stdc++.h>
using namespace std ;
int main(){
    int sum=0,t[5]={0} ;
    int n ;
    cin>>n ;
    for (int i = 0 ; i<n ;i++){
        int x ;
        cin>>x ;
        t[x]++ ;
    }
    sum=t[4]+t[3] ;
    t[1]=max(0,t[1]-t[3]) ;
    sum+=(t[2]*2)/4 ;
    t[1]+=(t[2]*2)%4 ;
    sum +=(t[1]/4 + (t[1]%4>0)) ;
    cout<<sum ;
}