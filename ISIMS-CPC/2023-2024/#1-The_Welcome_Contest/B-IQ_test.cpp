#include <bits/stdc++.h>
using namespace std ;
int main(){
    int x ;
    cin>>x ;
    int e_count = 0, o_count = 0 ;
    int e_n,o_n ;
    for (int i = 0 ; i<x ; i++){
        int number ;
        cin>>number ;
        if (number%2==0){
            e_count++ ;
            e_n = i+1 ;
        }
        else{
            o_count++ ;
            o_n = i+1 ;
        }
    }
    if (e_count < o_count)
        cout<<e_n ;
    else 
        cout<<o_n ;
    
}