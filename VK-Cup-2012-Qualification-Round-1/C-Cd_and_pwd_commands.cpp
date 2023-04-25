#include <bits/stdc++.h>
using namespace std ;
void conv(string s,vector<string>&v){
    s.append(1,' ') ;
    string ch="" ;
    for (auto c : s){
        if (c!='/' && c!=' '){
            ch.append(1,c) ;
        }
        else if (ch!=""){
            v.push_back(ch) ;
            ch="" ;
        }
    }
}
int main(){
    int n ;
    cin>>n ;
    vector<string>v ;
    for (int i = 0 ; i<n ; i++){
        string s ;
        cin>>s ;
        if (s=="cd"){
            cin>>s ;
            vector<string> vect ;
            conv(s,vect) ;
            if (s[0]=='/')
                v.clear() ;
            for (auto k : vect){
                if (k=="..")
                    v.pop_back() ;
                
                else 
                    v.push_back(k) ;
            }
        }
        else {
            if (v.size()==0)
                cout<<'/'<<endl ;
            else {
                cout<<'/' ;
                for (auto c : v)
                    cout<<c<<'/' ;
                cout<<endl ;
            }
        }
    }
    return 0 ;
}