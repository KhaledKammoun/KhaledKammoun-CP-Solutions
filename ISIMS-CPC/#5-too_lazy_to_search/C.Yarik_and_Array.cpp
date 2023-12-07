#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t,n ;
    t = 1 ;
    cin>>t ;
    while (t--){
        cin>>n ;
        int tab[200001] = {0} ;
        for (int i = 0 ; i<n ;i++)
            cin>>tab[i] ;
        int left = 0, right = 0 ;
        int current_max = tab[0], max_subarray = tab[0] ;
        while (right < n-1){
            if (abs(tab[right + 1]%2) == abs(tab[right]%2)){
                current_max = 0 ;
                left = right + 1;
            }
            else{
                while (left<=right && tab[left]<=0){
                    current_max-=tab[left] ;
                    left++ ;
                }
            }
            right++ ;
            current_max+=tab[right] ;
            max_subarray = max(max_subarray, current_max) ;
        }
        for (int j = left ; j<right ; j++){
            
            current_max-=tab[j] ;
            max_subarray = max(max_subarray, current_max) ;
        }
        cout<<max_subarray<<endl ;
    }
}