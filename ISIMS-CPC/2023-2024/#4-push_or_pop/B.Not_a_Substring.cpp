#include <bits/stdc++.h>
using namespace std ;
bool contain(const string& s,const int n){
    for (int i = 1 ; i<n ; i++){
        if (s[i - 1] == ')' && s[i] == '(')
            return true ;
    }
    return false ;
    
}

int main(){
    int n ;
    cin>>n ;
    for(int i = 0 ; i<n ;i++){
        string s ;
        cin>>s ;
        int n = s.size() ;
        if (n == 2 && s[0] == '(' && s[1] == ')')
            cout<<"NO"<<'\n' ;
        else{
            cout<<"YES"<<'\n';
            if (contain(s, n)){
                for (int i = 0 ; i<n*2 ;i++)
                    cout<<((i<n) ? "(" : ")");   
            }
            else {
                for (int i = 0 ; i<n ;i++)
                    cout<<"()";   
            }
            cout<<'\n' ;
            
        }
    }
}
