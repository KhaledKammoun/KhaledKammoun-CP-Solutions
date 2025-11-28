#include<bits/stdc++.h>
using namespace std ;
int t ;
int main(){
    t = 1;
    cin>>t;
    while(t--)
    {
        int n ;
        cin>>n ;
        int index  = 1, max_index = 0 ;
        for (int i = 0 ; i<n ;i++){
            int a,b ;
            cin>>a>>b ;
            if (a <= 10 && max_index < b){
                index = i + 1;
                max_index = b ;
            }
        }
        cout<<index<<endl ;
    }
}