#include <bits/stdc++.h>
using namespace std ;
int t,n,k  ;
int main(){
    t = 1;
    cin>>t;
    while(t--)
    {
        int count_cells = 0, var = -1 ;
        cin>>n>>k ;
        for (int i = 0 ; i<n ; i++){
            char word ;
            cin>>word ;
            if (word == 'B' && var <= -1)
                var = k ;
            var-- ;
            if (var == 0){
                count_cells++ ;
                var = -1 ;
            }        
        }
        if (var>-1)
            count_cells++ ;
        cout<<count_cells<<endl ;
    }
}