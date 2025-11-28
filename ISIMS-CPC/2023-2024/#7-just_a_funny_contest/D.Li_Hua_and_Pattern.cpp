#include <bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    t = 1 ;
    cin>>t ;
    while(t--){
        int n, k ;
        cin>>n>>k ;
        int diff_count = 0; 
        int **t = new int*[1001];
        for (int i = 0; i < 1001; ++i) {
            t[i] = new int[1001];
        }
        for (int i = 0; i < n ; i++){
            for (int j = 0; j < n ; j++){
                cin>>t[i][j] ;
            }
        }
        for (int i = 0; i < n ; i++){
            for (int j = 0; j < n ; j++){
                if (t[i][j] != t[n-i-1][n-j-1])
                    diff_count++ ;
            }
        }
        if (diff_count > k)
            cout<<"NO"<<endl ;
        else {
            if (diff_count == k || (k > diff_count && diff_count!= 0 && ((k%diff_count) == 0)))
                cout<<"YES"<<endl ;
            else 
                cout<<"NO"<<endl ;
        }
        
        for (int i = 0; i < 1001; ++i) {
            delete[] t[i];
        }
        delete[] t;
    }
}