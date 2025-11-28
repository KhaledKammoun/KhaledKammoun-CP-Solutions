#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n, i = 1, j = 0;
    cin>>n ;
    string s1, s2 = "", s ;
    cin>>s1 ;

    for (int k = 1; k<n ;k++){
        cin>>s ;
        if (s == s1)
            i++ ;
        else {
            j++ ;
            s2 = s ;
        }
    }

    cout<<((i>j) ? s1 : s2) ;
    
}