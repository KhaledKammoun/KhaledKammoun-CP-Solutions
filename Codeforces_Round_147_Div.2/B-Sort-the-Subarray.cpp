#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    for (int i = 0 ; i<t ; i++){
        int n ;
        cin>>n ;
        for (int j = 0 ; j<n ;j++){
            int x ;
            cin>>x;
        }
        vector<pair<int,int>> v ;
        int max_size_1 = -1, max_size_2 = -1; 
        int x_1 = 1, y_1 = 1,x_2 = 1, y_2 = 1 ;
        int x_var = -1 ;
        int x = 1, y = 1, prev_var = 0 ;
        for (int j = 0 ; j<n ;j++){
            int var ;
            cin>>var ;
            if (prev_var != 0){
                if (var < prev_var){
                    x = y ;
                    x_var = var ;
                }
                if (((y_1 - x_1) >= max_size_1) && (x_var != var)){
                    x_1 = x ;
                    y_1 = y ;
                    max_size_1 = y_1 - x_1 ;
                }
                if (((y_2 - x_2) >= max_size_2) && (x_var == var)){
                    x_2 = x ;
                    y_2 = y ;
                    max_size_2 = y_2 - x_2 ;
                }
                
            }
            else 
                x_var = var ;
            prev_var = var ;
            y++ ;
        }
        if (y_1 - x_1 >= y_2 - x_2)
            cout<<x_1<<" "<<y_1<<endl ;
        else
            cout<<x_2<<" "<<y_2<<endl ;
        
            
    }

}