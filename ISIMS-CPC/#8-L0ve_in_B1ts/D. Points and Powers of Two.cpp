#include <bits/stdc++.h>
using namespace std ;
vector<int> result {1};
bool verif(vector<int>&v){
    for (int i = 0; i < v.size(); i++){
        for (int j = i + 1; j < v.size(); j++){
            int var = abs(v[i] - v[j]) ;
            int var_length = 0 ;
            while (var){
                var_length++ ;
                var>>=2 ;
            }
            if (!(abs(v[i] - v[j]) & (2 << (var_length-1))))
                return false ; 
        }
    }
    return true ;
}

void dfs(int t,const vector<int>& v,vector<int> &subset, int start){
    if (start>=t){
        return ;
    }
    for (int i = start; i < t; i++){
        subset.push_back(v[i]) ;
        if (!verif(subset)){
            subset.pop_back();
            continue;
        }
        if (verif(subset) && result.size() < subset.size()){
            for (int j = 0; j < subset.size(); j++){
                cout<<subset[j]<<" " ;
            }
            cout<<endl ;
            result = subset ;
        }
        dfs(t, v, subset, i + 1) ;
        subset.pop_back() ;
    }
    return ;
}
int main(){

    int t ;
    cin>> t ;
    vector<int>v ;
    for (int i = 0; i < t ;i++){
        int n ;
        cin>>n ;
        v.push_back(n) ;
    }
    vector<int> subset;
    dfs(t, v, subset, 0) ;
    cout<<result.size()<<endl ;
    for (int i = 0; i < result.size() ; i++)
        cout<<result[i]<<" " ;
}