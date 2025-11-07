#include<bits/stdc++.h>
using namespace std ;
 
int verif(string &ch, int start) {
    int x = 1 ;
    for (int i = start + 1; i < ch.size() ; i++) {
        if ('A' + x == ch[i]) {
            x++ ;
        }
 
        if ('A' + x - 1 == 'Z') {
            return i - start + 1 ;
        }
    }
    return 1001 ;
}
int main(){
    int min_val = 1001  ;
    string ch ;
    cin>>ch ;
    for (int i = 0; i < ch.size(); i++) {
        if (ch[i] == 'A') {
            min_val = min(min_val, verif(ch, i)) ;
        }
    }
    cout<<min_val ;
 
}        