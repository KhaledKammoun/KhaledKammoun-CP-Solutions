#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    for (int i = 0 ;i<t ; i++){
        int a, b, c, d ;
        cin>>a>>b>>c>>d ;
        int result = 0 ; 
        if (a < b) {
            result++;
        }
        if (a < c) {
            result++;
        }
        if (a < d) {
            result++;
        }
        cout<<result<<endl ;
    
  
       
    }
}