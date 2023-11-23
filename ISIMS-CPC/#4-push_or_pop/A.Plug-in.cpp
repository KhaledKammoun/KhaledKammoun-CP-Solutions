#include <bits/stdc++.h>
using namespace std ;
int main(){
    string s ;
    cin>>s ;
    if (s.size() == 1)
        cout<<s ;
    else{
        for (int i = 1 ;i<s.size() ; i++){
            if (s[i] == s[i-1]){
                s.erase(i-1,2) ;
                i-=2 ;
            }
        }
        cout<<s ;
    }
}