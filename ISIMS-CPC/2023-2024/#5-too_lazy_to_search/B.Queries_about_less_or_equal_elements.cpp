#include<bits/stdc++.h>
using namespace std ;
int main(){
    int a,b ;
    cin>>a>>b ;
    vector<int>v(a) ;
    int x ;
    for(int i = 0 ; i<a ; i++){
        cin>>x ;
        v[i] = x ;
    }
    sort(v.begin(), v.end()) ;
   
    for (int i = 0 ; i<b ; i++){
        cin>>x ;
        auto it = std::upper_bound(v.begin(), v.end(), x);
        cout<<(it - v.begin())<<" " ;
    }

}