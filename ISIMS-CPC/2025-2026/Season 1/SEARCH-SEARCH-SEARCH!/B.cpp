#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
    cin>>t ;
    for (int i = 0 ;i<t ; i++){
        int n ; 
        cin>> n ;
        string s1, s2; 
        cin>>s1>>s2;

        string sorted_s1 = s1;
        string sorted_s2 = s2;
        sort(sorted_s1.begin(), sorted_s1.end());
        sort(sorted_s2.begin(), sorted_s2.end());
        if (sorted_s1 == sorted_s2) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    
  
       
    }
}