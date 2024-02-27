#include <bits/stdc++.h>
#include <fstream>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define newL cout<<endl
#define ll long long
using namespace std ;

int main(){
    FAST ;
    int t,n,i;
    cin>>t ;
    while(t--){
        cin>>n ;
        vector<int> p(n+1, 0) ;
        for (i = 1; i <= n ; i++){
            cin>>p[i] ;
        }

        vector<int> days(n, 1) ;
        for (i = 1; i <= n; i++){
            int curr = i, count = 1 ;
            while (p[curr] != i){
                curr = p[curr] ;
                count++ ;
            }
            days[i] = count ;
        }
        for(i = 1; i <= n; i++){
            cout<<days[i]<< " " ;
        }
        cout<<endl ;
    }


}

