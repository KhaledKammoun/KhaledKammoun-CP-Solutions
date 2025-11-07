#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    for (int i = 0 ; i<t ; i++){
        int n ;
        cin>>n ;
        
        for (int j = 0 ; j<n ;j++){
            int var ;
            cin>>var ;
        }
        int var = -1, prev_var = -1 ;
        int x = 1, y = 1, x_var = 1, y_var = 1 ;
        
        for (int j = 0 ; j<n ;j++){
            cin>>var ;
            if (prev_var != -1){
                if (var < prev_var){
                    if (y - x >= y_var - x_var){
                        x_var = x ;
                        y_var = y ;
                    }
                    
                    x = j ;
                    y = j ;
                }
                else 
                    y = j ;
            }
            prev_var = var ;
        }
        cout<<x_var+1<<" "<<y_var+1<<endl ;
            
    }

}