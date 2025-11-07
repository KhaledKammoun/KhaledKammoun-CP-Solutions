#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t ;
    cin>>t ;
    for (int i= 0 ;i<t ; i++){
        string s ;
        cin>>s ;
        int var = 1 ;
        if (s[0]=='0')
            cout<<0<<endl ;
        else{
            for (int j = 0 ; j < s.size() ; j++){
                if (s[j]=='?'){
                    if (j == 0)
                        var*=9 ;
                    else
                        var*=10 ;
                }
            }
            cout<<var<<endl ;
        }
        
    }
}