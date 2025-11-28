#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    cin>>n ;
    int t[1001] = {0} ;
    t[1] = 1 ;
    t[2] = 1 ;
    bool test[1001] = {0} ;
    test[1] = true; 
    for (int i = 3 ; t[i-1]<n ; i++){
        t[i] = t[i-1] + t[i-2] ;
        test[t[i]] = true ;
    }
    string ch = "" ;
    for (int i = 1 ; i<=n ; i++){
        ch+=((test[i]) ? 'O' : 'o') ;
    }
    cout<<ch ;
}