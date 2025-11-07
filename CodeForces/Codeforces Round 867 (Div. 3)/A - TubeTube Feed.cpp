#include <iostream>
using namespace std;
int main()
{
    int t,n,k ;
    cin>>t ;
    for (int i = 0 ; i<t ; i++){
        cin>>n>>k ;
        int a[n],b[n] ;
        for (int j = 0 ; j<n ;j++)
            cin>>a[j] ;
        int sum = 0 ,max_k=0,ind = -1;
        for (int j = 0 ; j<n ;j++){
            cin>>b[j] ;
            if (a[j]+j <=k){
                if (max_k<=b[j]){
                    sum = a[j] ;
                    max_k = b[j] ;
                    ind = j+1 ;
                }
            }
        }
        cout<<ind<<endl ;
    }
    return 0;
}