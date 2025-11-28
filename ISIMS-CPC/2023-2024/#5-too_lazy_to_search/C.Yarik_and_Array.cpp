#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t,n ;
    t = 1 ;
    cin>>t ;
    while (t--){
        cin>>n ;
        int prev_int = 0, curr_int = 0 ;
        int curr_sum, m ; 
        for (int i = 0 ; i<n ;i++){
            cin>>curr_int ;
            if (i == 0){
                curr_sum = curr_int ;
                m = curr_int ;
            }
            else{
                if (abs(prev_int)%2 != abs(curr_int)%2 && curr_sum + curr_int > curr_int)
                    curr_sum = curr_sum + curr_int ;
                else
                    curr_sum = curr_int ;
                m = max(m, curr_sum) ;
            }
            prev_int = curr_int ;
        }
        cout<<m<<endl ;
    }
}