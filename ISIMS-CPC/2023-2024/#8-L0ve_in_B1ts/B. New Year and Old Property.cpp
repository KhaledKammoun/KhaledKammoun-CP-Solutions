#include <bits/stdc++.h>
using namespace std ;
int main(){
    long long a,b;
    cin>>a>>b ;
    int count  = 0;
    long long one_var = 1 ;
    for (int i = 0; i < 64; i++){
        long long var = ((one_var<<i) - 1) ;
        for (int j = 0; j < (i-1) ; j++){
            long long var_xor = (var ^ (one_var<<j)) ;
            if (var_xor >= a && var_xor <= b){
                cout<<i<<" - "<<j<<" : "<<var_xor<<endl ;
                count++ ;
            }
        }
    }
    cout<<count ;
}
