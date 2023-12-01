#include <bits/stdc++.h>
using namespace std ;
int main(){
    int t,n,k ;
    cin>>t ;
    for (int i = 0 ; i<t ;i++){
        cin>>n>>k ;
        int tab[101] ={0} ;
        int x = 0 ;
        for (int j = 0 ; j<n ;j++){
            char c ;
            cin>>c ;
            if (c == 'B')
                tab[++x] = j ;
        }
        
        if (x == k)
            cout<<"0"<<endl ;
        else{
            cout<<"1"<<endl ;
            if (x<k){
                cout<<k - x<<" B"<<endl ;
            }
            else{
                cout<<tab[x - k] + 1<<" A"<<endl ;
            }
        }
    }
    return 0 ;
}