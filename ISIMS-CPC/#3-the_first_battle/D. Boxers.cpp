#include <bits/stdc++.h>
using namespace std ;


int main(){
    int t ;
    cin>>t ;
    vector<int>v ;
    unordered_map<int,int> m ;
    
    for (int i = 0 ; i<t; i++){
        int x ;
        cin>>x ;
        v.push_back(x) ;
        m[x]++;
    }
    int total = 0 ;
    for (const auto& pair : m) {
        if (pair.first == 1 || pair.first == 150001)
            total+=min(pair.second, 2) ;
        else 
            total+=min(pair.second, 3) ;
        if (pair.first > 1 && m[pair.first - 1] >1)
            total-- ;
    }

    cout<<total ;
}