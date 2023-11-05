#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    for (int i = 0 ; i<t ; i++){
        int n ;
        cin>>n ;
        int t[200001] = {0} ;
        for (int j = 0 ; j<n ;j++){
            cin>>t[j] ;
        }
        vector<pair<int,int>> v ;
        int x = 1, y = 1, prev_var = 0 ;
        for (int j = 0 ; j<n ;j++){
            int var ;
            cin>>var ;
            v.push_back(make_pair(x,y)) ;
            if (var >= prev_var)
                y = j + 1 ;
            else {
                y = j + 1 ;
                x = j + 1 ;
            }
            prev_var = var ;
        }
        v.push_back(make_pair(x,y)) ;
        int max_size = -1; 
        for (auto c : v){
            if ((c.second - c.first) > max_size){
                x = c.first ;
                y = c.second ;
                max_size = c.second - c.first ;
            }
        }
        cout<<x<<" "<<y<<endl ;
    }
}