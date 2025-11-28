#include <bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    t = 1 ;
    cin>>t ;
    while(t--){
        int n, k ;
        cin>>n>>k ;
        int t_nbFruits[200001] = {0} ;
        int t_length[200001] = {0} ;
        for (int i = 0; i<n ;i++){
            cin>>t_nbFruits[i] ;
        }
        for (int i = 0; i<n ;i++){
            cin>>t_length[i] ;
        }

        int curr = t_nbFruits[0], max_length = 0, curr_lenght = 0;
        if (curr <= k && n>1 && t_length[0] % t_length[0+1] == 0){
            curr_lenght = 1 ;
            max_length = 1 ;
        }
        for (int i = 1 ;i<n ;i++){
            if (t_length[i - 1] % t_length[i] == 0 && curr + t_nbFruits[i] <= k){
                curr_lenght++ ;
                curr+=t_nbFruits[i] ;
            }else{
                max_length = max(max_length, curr_lenght) ;
                curr = t_nbFruits[i] ;
                if (curr <= k)
                    curr_lenght = 1 ;
            }
            max_length = max(max_length, curr_lenght) ;
        }
        max_length = max(max_length, curr_lenght);
        cout<<max_length<<endl ;
    }
}