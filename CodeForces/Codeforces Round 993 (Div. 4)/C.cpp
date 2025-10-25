
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t ;
    for (int i = 0; i < t; i ++) {
        int m,a,b,c ;
        cin>>m>>a>>b>>c ;
        int result = 0 ;
        int var_a = min(a, m) ;
        int var_b = min(b, m) ;
        int var_c = min(c, 2*m - (var_a + var_b)) ;
        result = var_a + var_b + var_c ;
        cout<<result<<endl;
    }
}
 