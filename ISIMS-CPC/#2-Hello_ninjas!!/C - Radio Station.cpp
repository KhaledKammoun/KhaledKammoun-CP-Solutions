#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,x ;
    cin>>n>>x ;
    unordered_map<string,string> m ;
    for (int i = 0 ; i<n ; i++){
        string s,s1 ;
        cin>>s>>s1 ;
        m[s1+";"] = s ;
    }
    for (int i = 0 ; i<x ; i++){
        string s,s1 ;
        cin>>s>>s1 ;
        cout<<s<<" "<<s1<<" #"<<m[s1]<<endl ;
    }
}