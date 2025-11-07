#include <bits/stdc++.h>
#include <fstream>
 
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define newL cout<<endl
#define ll long long
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> max_count(n, 0) ;
        for (int i = 0 ; i < n ; i++ ){
            for (int j = 0 ; j < n ; j++) {
                if (v[j] > v[i] && i != j) {
                    max_count[i]++ ;
                }
            }
        }
 
 
        int result = n ;
        for (int i = 0 ; i < n ; i++) {
            result = min(result, i + max_count[i]) ;
        }
        cout<<result<<endl ;
 
    }
    return 0;
}