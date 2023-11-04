#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    for (int i = 0 ; i<t ; i++){
        int n ;
        cin>>n ;
        int t[200001] = {0} ;
        for (int j = 0 ; j<n ;j++){
            cin>>t[j] ;
        }
        int x = 1,y = 1 ;
        for (int j = 0 ; j<n ;j++){
            int var ;
            cin>>var ;
            if (t[j]!=var){
                if (x == 1)
                    x = j + 1 ;
                y = j + 1 ;
            }
        }
        cout<<x<<" "<<y<<endl ;
    }
}