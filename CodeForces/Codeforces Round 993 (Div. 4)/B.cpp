
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t ;
    for (int i = 0; i < t; i ++) {
        string s ;
        cin>>s ;
        string new_s; 
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == 'q') {
                new_s+='p' ;
            }else if (s[i] == 'p') {
                new_s+='q' ;
            }else {
                new_s+='w' ;
            }
        }
        cout<<new_s<<endl ;
    }
}
 