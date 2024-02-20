#include <bits/stdc++.h>
using namespace std ;
#define fast ios_base::sync_with_stdio(false);
 
int main(){
    fast ;
    string s ;
    int a, b, n, i ;
    
    cin>>s ;
    vector<int> v(s.size() + 1) ;
    v[0] = 0 ;
    for (i = 0; i <  s.size() - 1; i ++)
        v[i+1] = v[i] + ((s[i] == s[i+1]) ? 1 : 0) ;
        
    
    cin>>n ;
    for (i = 0; i < n;i++){
        
        cin>>a>>b ;
        cout<<v[b-1] - v[a-1]<<endl ; 
    }
}