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
        int var = -1,prev_var = 200001 ;
        int tab1[200001] = {0} ;
        for (int j = 0 ; j<n ;j++){
            cin>>var ;
            if (prev_var <= var){
                if (x == 1)
                    x = j ;
                else 
                    y = j + 1;
            }
            
            prev_var = var ;
        }
        if (prev_var <= var)
            y = n ;
        cout<<x<<" "<<y<<endl ;
            
    }

}