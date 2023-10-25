#include <bits/stdc++.h> 
using namespace std ;
int main(){
    int n ;
    cin>>n ;
    std::vector<int>v ;
    for (int i = 0 ; i<n ;i++){
        int x ;
        cin>>x ;
        v.push_back(x) ;
    }
    sort(v.begin(),v.end()) ;
    int lst = 0, total = 0 ;
    for (auto &c : v){
        if (lst > c)
            n-- ;
        else
            lst = max(lst + 1, c - 1) ;
    }
    cout<<n ;
}