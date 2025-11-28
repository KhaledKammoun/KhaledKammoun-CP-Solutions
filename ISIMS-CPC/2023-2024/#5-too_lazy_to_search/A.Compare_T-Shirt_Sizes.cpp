#include<bits/stdc++.h>
using namespace std ;
int main(){
    int t ;
     t = 1;
    cin>>t;
    while(t--){
        string a, b ;
        cin>>a>>b ;
        int a_len = a.size(), b_len = b.size() ;
        //test M
        if (*(a.end()-1) == 'M' || *(b.end() - 1) == 'M'){
            if (*(a.end()-1) == 'L' || (*(a.end()-1) == 'M' && *(b.end()-1) == 'S'))
                cout<<'>'<<endl ;
            else if (*(a.end()-1) == 'M' && *(b.end() - 1) == 'M')
                cout<<'='<<endl ;
            else 
                cout<<'<'<<endl ;
        }
        else if (*(a.end()-1) == *(b.end() - 1)){
            if (a_len > b_len)
                cout<<((*(a.end()-1) == 'S') ? '<' : '>')<<endl ;
            else if (a_len < b_len)
                cout<<((*(a.end()-1) == 'S') ? '>' : '<')<<endl ;
            else 
                cout<<'='<<endl ;
        }
        else{
            cout<<((*(a.end()-1) == 'S') ? '<' : '>')<<endl ;
        }
    }
}