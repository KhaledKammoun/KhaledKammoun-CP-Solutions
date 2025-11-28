#include <bits/stdc++.h>
using namespace std ;
int main(){
    int x ;
    cin>>x ;
    string ss ;
    cin>>ss ;
    
    int start = (x%2==0) ? 1 : 2 ;
    
    for (int i = 0 ; i<x ; i++){
        cout<<ss[i] ;
        if (i<x-1 && i>=start && ((i%2!=0 && x%2==0) || (i%2==0 && x%2!=0)))
            cout<<"-" ;
    }
}