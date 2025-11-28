#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);
 
using namespace std ;
int main(){
    fast ;
    int t ;
    cin>>t ;
    while (t--){
        int n ;
        cin>>n ;
        int result ;
        for (int i = 0; i < n ; i++){
            int var ;
            cin>>var ;
            if (i == 0)
                result = var ;
            else {
                result&=var ;
            }
        }
        cout<<result<<endl ;
    }
}