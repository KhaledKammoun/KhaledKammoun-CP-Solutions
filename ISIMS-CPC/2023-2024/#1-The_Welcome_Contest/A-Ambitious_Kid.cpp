#include <bits/stdc++.h>
using namespace std ;
int main(){
    int x ;
    cin>>x ;
    int m = 100001 ;
    for (int i = 0 ; i<x ; i++){
        int number ;
        cin>>number ;
        
        m = min(m,abs(number)) ;
    }
    cout<<m ;
}