#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    for (int i = 0 ;i<t ; i++){
        long long p, a, b, c ;
        cin>>p>>a>>b>>c ;
        
        if (p%a ==0 || p%b==0 || p%c==0)
            cout<<0 ;
        else{
            long long val = min(b - (p%b), c - (p%c)) ;
            val = min(val, a - (p%a)) ;
            cout<<val ;
        }
        cout<<endl ;
    }
}