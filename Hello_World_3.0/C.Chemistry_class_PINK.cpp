#include <bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    
    while(t--){
        int tab[26]={0} ;
        string s ;
        cin>>s ;
        int n = s.size(), c = 1 ;
        bool b =0 ;
        for (int i = 0 ; i<n ; i++){
            if (s[i]=='-')
                b = 1 ;
            else {
                if (s[i]=='+' || s[i]=='>')
                    c = 1 ;
                else if (isdigit(s[i]) && (i==0 || s[i-1]=='+' || s[i-1]=='>'))
                    c = s[i]-'0' ;
                else if (!isdigit(s[i])){
                    if (i<n-1 && isdigit(s[i+1])){
                        if (!b)
                            tab[s[i]-'A']+=((s[i+1]-'0')*c) ;
                        else 
                            tab[s[i]-'A']-=((s[i+1]-'0')*c) ;
                    }
                    else {
                        if (!b)
                            tab[s[i]-'A']+=c ;
                        else 
                            tab[s[i]-'A']-=c ;
                    }
                }
            }
        }
        
        bool allZero = true;
        for (int i = 0; i < 26; i++) {
            if (tab[i] != 0) {
                allZero = false;
                break;
            }
        }
        if (allZero)
            cout<<"DA"<<endl ;
        else
            cout<<"NE"<<endl ;
    }
}