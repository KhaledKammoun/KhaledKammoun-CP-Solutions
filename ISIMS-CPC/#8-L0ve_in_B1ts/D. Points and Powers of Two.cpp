#include <bits/stdc++.h>
using namespace std ;
int main(){

    int t ;
    cin>> t ;
    int max_val = 0;
    vector<int> result ;
    unordered_map<int, bool> visited ;
    vector<int> v ;
    for (int i = 0; i < t ;i++){
        int n ;
        cin>>n ;
        visited[n] = true ;
        max_val = max(max_val, n) ;
        v.push_back(n) ;
    }
    
    for (int i = 0; i < t; i++){
        vector<int> subvector ;
        int incremented_var = 0 ;
        
        while (abs(v[i] + ((incremented_var) ? (1<<incremented_var) : 0)) <= max_val){
            auto it = (visited.find(abs(v[i] + ((incremented_var) ? (1<<incremented_var) : 0))));
            if (it != visited.end()) {
                subvector.push_back(abs(v[i] + ((incremented_var) ? (1<<incremented_var) : 0))) ;
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