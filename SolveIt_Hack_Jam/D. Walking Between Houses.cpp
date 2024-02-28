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
    vector<int> result ;
    for (int i = 0; i < k && s > 0; i++){
        new_s = abs(new_s - ((s<n) ? s : n)) ;
        s-=((s<n) ? s : n) ;
        result.push_back(new_s+1) ;
    }
    if (result.size() == k && s == 0){
        cout<<"YES"<<endl ;
        for (int i = 0; i < k; i++)
            cout<<result[i]<<" " ;
    }
    else {
        cout<<"NO" ;
    }

}

