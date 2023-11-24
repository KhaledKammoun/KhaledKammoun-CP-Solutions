#include <bits/stdc++.h>
using namespace std ;
bool contain(const string& s, const string& t){
    size_t found = t.find(s);
    if (found != std::string::npos) 
        return true ;
    return false;
    
}
void dfs(const string& s, string& t, string& result, int n, int &nb_left, int &nb_right){
    if (contain(s,t))
        return ;
    if (t.size() == n*2){
        result = t ;
        return ;
    }
    if (!contain(s, t + "(") && nb_left < n){
        t+="(" ;
        nb_left++ ;
        dfs(s,t,result, n,nb_left,nb_right) ;
        t.erase(t.begin() + t.size() - 1);
        nb_left-- ;
    }
    if (!contain(s, t + ")") && nb_left > nb_right){
        t+=")" ;
        nb_right++ ;
        dfs(s,t,result, n,nb_left,nb_right) ;
        t.erase(t.begin() + t.size() - 1);
        nb_right-- ;
    }
}
bool isValid(string s) {
    stack<char>stc ;
    
    for (int i = 0 ; i<s.size() ;i++){
        if (!stc.empty() && ((s[i] == '}' && stc.top() == '{') || 
                             (s[i] == ')' && stc.top() == '(') || 
                             (s[i] == ']' && stc.top() == '[')))
            stc.pop() ;
        else 
            stc.push(s[i]) ;
        
    }
    return stc.empty() ;
}
int main(){
    int n ;
    cin>>n ;
    for(int i = 0 ; i<n ;i++){
        string s ;
        cin>>s ;
        if (isValid(s))
            cout<<"NO"<<'\n' ;
        else{
            string t = "" ;
            int n = s.size() ;
            if (contain(s, ")(")){
                for (int i = 0 ; i<n*2 ;i++)
                    t += ((i<n) ? "(" : ")");   
            }
            else {
                for (int i = 0 ; i<n ;i++)
                    t += "()";   
            }
            cout<<"YES"<<'\n'<<t<<'\n';
            
        }
    }
}
