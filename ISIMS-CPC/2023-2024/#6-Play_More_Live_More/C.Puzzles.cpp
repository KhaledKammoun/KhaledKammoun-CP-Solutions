#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n, m ;
    cin>>n>>m ;
    int var ;
    cin>>var ;
    int min_val = var, max_val = var ;
    for (int i = 1; i<m; i++){
        cin>>var ;
        min_val = min(min_val, var) ;
        max_val = max(max_val, var) ;
    }
    cout<<max_val - min_val ;
}