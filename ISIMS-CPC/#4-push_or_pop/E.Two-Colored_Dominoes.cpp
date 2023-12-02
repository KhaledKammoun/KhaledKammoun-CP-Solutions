#include <bits/stdc++.h>
using namespace std ;
pair<int,int> tab_row[501] = {make_pair(0,0)} ;
pair<int,int> tab_col[501] = {make_pair(0,0)} ;
void black_white(char tab[501][501], int x,int y,int x1,int y1){
    bool b = false ;
    if ((tab_row[x].first >= tab_row[x].second) || (tab_col[y].first >= tab_col[y].second))
        b = false ;
    tab[x][y] = (b) ? 'B' : 'W' ;
    tab[x1][y1] = (b) ? 'W' : 'B';
    if (!b){
        tab_row[x].second++ ;
        tab_col[y].second++ ;
        tab_row[x1].first++ ;
        tab_col[y1].first++ ;
    }
    else{
        tab_row[x].first++ ;
        tab_col[y].first++ ;
        tab_row[x1].second++ ;
        tab_col[y1].second++ ;
    }
}
int main(){
    int t,n,m ;
    t = 1;
    cin>>t;
    while(t--){
        char tab[501][501] = {'.'} ;
        cin>>n>>m ;
        for (int i = 0; i<n ;i++){
            for (int j = 0 ;j<m ;j++){
                cin>>tab[i][j] ;
            }
        }
        if (n%2!=0 || m%2!=0)
            cout<<"-1"<<endl ;
        else {
            tab_row[501] = {make_pair(0,0)} ;
            tab_col[501] = {make_pair(0,0)} ;
            
            for (int i = 0; i<n ;i++){
                for (int j = 0 ;j<m ;j++){
                    if (tab[i][j] == 'L'){
                        black_white(tab, i,j,i,j+1) ;
                        
                    }
                    else if (tab[i][j] == 'U'){
                        black_white(tab, i,j,i+1,j) ;    
                    }
                }
            }
            
            //print
            for (int i = 0; i<n ;i++){
                for (int j = 0 ;j<m ;j++)
                    cout<<tab[i][j] ;
                cout<<endl; 
            }
        }
    }
}