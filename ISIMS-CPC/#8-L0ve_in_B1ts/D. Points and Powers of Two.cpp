#include <bits/stdc++.h>
using namespace std ;
vector<int> result {1};
bool verif(vector<int>&v){
    for (int i = 0; i < v.size() - 1; i++){
        int j = v.size() - 1 ;
        int var = abs(v[i] - v[j]) ;
        int var_length = 0 ;
        while (var){
            var_length++ ;
            var>>=1 ;
        }
        if (abs(v[i] - v[j]) != (1 << (var_length-1)))
            return false ; 
    }
    return true ;
}

void dfs(int t,vector<int>& v,vector<int> &subset, int start){
    for (int i = start; i < t; i++){
        subset.push_back(v[i]) ;
        if (!verif(subset)){
            subset.pop_back();
            continue;
        }
        if (verif(subset) && result.size() <= subset.size()){
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