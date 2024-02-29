#include <bits/stdc++.h>
#include <fstream>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define newL cout<<endl
#define ll long long
using namespace std ;

int main(){
    FAST ;
    int n, k, s;
    cin>>n>>k>>s ;
    int new_s = 0 ;
    n-- ;
    s-- ;
    vector<int> result ;
    for (int i = 0; i < k && s > 0; i++){
        if ((s > n) || (s == n && i == k)){
            new_s = abs(n - new_s) ;
            s-=n ;
        }
        else if (s < n) {
            if (i == k-1){
                new_s = abs(n - s) - 1;
                s = 0;
            }
            else {
                new_s = abs(new_s - 1) ;
                s-- ;
            }
        }
        result.push_back(new_s+1) ;
    }
    if (s == 0){
        cout<<"YES"<<endl ;

    }
    else {
        cout<<"NO" ;
    }
    for (int i = 0; i < k; i++)
        cout<<result[i]<<" " ;
    cout<<endl<<s ;

}

