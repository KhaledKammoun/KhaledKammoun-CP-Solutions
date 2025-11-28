#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define newL cout<<endl
#define ll long long
using namespace std ;
int t ;
int main ()
{
    FAST;
    //freopen("a.txt", "r", stdin);
    t = 1;
    map<string,int>s ;
    cin>>t;
    while(t--)
    {
        string ch ;
        cin>>ch  ;
        if (s.find(ch) !=s.end()){
            cout<<ch<<s[ch] ;
            s[ch]++ ;
        }
        else {
            s[ch]=1 ;
            cout<<"OK" ;
        }
        newL ;
    }
}