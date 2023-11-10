#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    for (int i = 0 ; i<t ; i++){
        int n ;
        cin>>n ;
        int tab[200001] = {0} ;
        for (int j = 0 ; j<n ;j++){
            
            cin>>tab[j] ;
        }
        int x = 1, y = 1 ;
        bool y_move = false ;
        int tab1[200001] = {0} ;
        for (int j = 0 ; j<n ;j++){
            cin>>tab1[j] ;
            if (tab1[j] != tab[j]){
                x = j ;
                y_move = true ;
            }
            else 
                y_move = false ;
            if (y_move)
                y = j ;
        }
        
        while (x>0 && tab1[x-1] <= tab1[x])
            x-- ;
        while (y<n-1 && tab1[y] <= tab1[y+1])
            y++ ;
        cout<<x+1<<" "<<y+1<<endl ;
            
    }

}