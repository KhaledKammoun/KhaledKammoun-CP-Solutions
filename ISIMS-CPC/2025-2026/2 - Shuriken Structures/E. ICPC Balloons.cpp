#include <bits/stdc++.h>
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define newL cout<<endl
using namespace std;
int t ,n ;
int main()
{
 
    FAST;
    //freopen("a.txt", "r", stdin);
    t = 1;
    cin>>t;
    while (t--)
    {
        cin>>n ;
        string c ;
        cin>>c ;
        map<int,bool>ch ;
 
        int ans = 0 ;
        for (int i=0 ; i<n ;i++)
        {
            if (ch.find(c[i]) != ch.end())
                ans++ ;
            else
            {
                ch[c[i]]=1 ;
                ans+=2 ;
            }
        }
        cout<<ans ;
        newL ;
    }
    return 0 ;
}