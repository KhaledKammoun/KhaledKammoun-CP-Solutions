#include <bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    for (int i = 0 ; i<t ;i++){
        int a,b ;
        cin>>a>>b ;
        std::vector<int> v ;
        for (int j = 0 ; j<b ;j++){
            int x ;
            cin>>x ;
            v.push_back(x) ;
        }
        sort(v.begin(),v.end()) ;
        int som = 0, start = 0 ;
        while(v.size()>0 && start<v[v.size()-1]){
            som++ ;
            start+= (a - v[v.size()-1]) ;   
            v.pop_back() ;
        }
        cout<<som<<endl ;
    }
}