#include <bits/stdc++.h>
using namespace std ;
 
int t,n ;
int main(){
    t = 1;
    cin>>t;
    while(t--)
    {
        cin>>n ;
        for (int i = 0 ; i < n ; i++){
            int number ;
            cin>>number ;
        }
        // using combination: x C k * 6, 6 is the all possible outcomes of a two-digit permutation 
        int x = (9 - n + 1) ;
        cout<<(x*(x-1) / 2) * 6<<endl ;
    }
    
}