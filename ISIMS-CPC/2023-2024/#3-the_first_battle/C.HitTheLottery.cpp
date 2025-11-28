#include <bits/stdc++.h>
using namespace std ;
int main(){
    int n, count = 0 ;
    cin>>n ;
    for (auto c : {100,20,10,5,1}){
        count+=(n/c) ;
        n%=c ;
    }
    cout<<count ;
}
