#include <bits/stdc++.h>
using namespace std ;
int main(){
    string s ;
    cin>>s ;
    int count = 1;
    bool test = false ;
    for (int i = 1; !test && i<s.size(); i++){
        if (s[i]==s[i-1])
            count++;
        if (count == 7){
            cout<<"YES" ;
            test = 1;
        }
        if (s[i]!=s[i-1])
            count = 1 ;
    }
    if (!test)
        cout<<"NO" ;
}