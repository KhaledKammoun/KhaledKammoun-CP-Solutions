#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);


int main() {
    fast;
    
    int t;
    cin >> t;
    while (t--){
        int n ;
        cin>>n ;
        long long max_val = 0 ;
        vector<long long> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            max_val = max(max_val,v[i]) ;
        }
        long long k = 0 ;

        for (long long i = 1; i < max_val +1; i++){
            unordered_set<long long> s ;
            for (int j = 0; j < v.size(); j++){
                s.insert(v[j] % i) ;
                if (s.size() > 2)
                    break ;
            }

            if (s.size() == 2){
                k = i ;
                break ;
            }
            s.clear();
        }
        cout<<((k == 0) ? 1000000000000000000 : k)<<endl ;
    }

    return 0;
}
