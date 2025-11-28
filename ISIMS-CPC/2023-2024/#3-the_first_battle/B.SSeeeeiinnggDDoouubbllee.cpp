#include <bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    for (int i = 0 ;i<t ;i++){
        string s ;
        cin>>s ;
        string s_reverse = s;
        std::reverse(s_reverse.begin(), s_reverse.end()) ;
        cout<<s+s_reverse<<endl ;
    }
}