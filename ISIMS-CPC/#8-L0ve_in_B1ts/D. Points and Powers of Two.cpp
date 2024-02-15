#include <bits/stdc++.h>
using namespace std ;
int main(){

    int t ;
    cin>> t ;
    long long max_val = 0;
    vector<long long> result ;
    unordered_map<long long, bool> visited ;
    vector<long long> v ;
    for (int i = 0; i < t ;i++){
        long long n ;
        cin>>n ;
        visited[n] = true ;
        max_val = max(max_val, n) ;
        v.push_back(n) ;
    }
    
    for (int i = 0; i < t; i++){
        vector<long long> subvector ;
        long long incremented_var = 0 ;
        
        while (abs(v[i] + ((incremented_var < 63) ? (1LL << incremented_var) : 0)) <= max_val){
            auto it = (visited.find(abs(v[i] + ((incremented_var < 63) ? (1LL << incremented_var) : 0))));
            if (it != visited.end()) {
                subvector.push_back(abs(v[i] + ((incremented_var < 63) ? (1LL << incremented_var) : 0))) ;
            }
            incremented_var++ ;
        }
        if (result.size() <= subvector.size())
            result = subvector ;
    }

    cout<<result.size()<<endl ;
    for (int i = 0; i < result.size() ; i++)
        cout<<result[i]<<" " ;
}