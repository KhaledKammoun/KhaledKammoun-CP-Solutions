// ----------------- Competitive Programming Template -----------------
// Author: Khaled Kammoun
// GitHub: https://github.com/KhaledKammoun
// LinkedIn: https://www.linkedin.com/in/khaled-kammoun-6b1059308/
// #FREE_PALESTINE
// #STOP_GENOCIDE_IN_GAZA
// -------------------------------------------------------------------
// Date: 2026-02-02
// -------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ull unsigned long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define endl '\n'
#define MOD 1000000007LL

// ----------------- IO & VECTOR MACROS -----------------
#define read_vector(v,n) for (int i = 0; i < n; i++) cin >> v[i];
#define print_vector(v) for (size_t i = 0; i < v.size(); i++) { cout << v[i] << ' '; } cout << endl;
#define print_vector_pair(v) for (size_t i = 0; i < v.size(); i++) { cout << v[i].first << " " << v[i].second << endl; }
#define print_map_int(m) for (map<int,int>::iterator it = (m).begin(); it != (m).end(); ++it) cout << it->first << ": " << it->second << endl;
#define print_map_ll(m) for (map<long long,long long>::iterator it = (m).begin(); it != (m).end(); ++it) cout << it->first << ": " << it->second << endl;

// ----------------- FOR LOOPS -----------------
#define f(i,x,n) for (int i = x; i < n; i++)
#define f0(i,n) for (int i = 0; i < n; i++)
#define f1(i,n) for (int i = 1; i < n; i++)

// ----------------- MAP ITERATORS -----------------
#define fmap_int(k,v,m) for (map<int,int>::iterator it = (m).begin(); it != (m).end() && ((k=it->first)&&(v=it->second),1); ++it)
#define fmap_ll(k,v,m) for (map<long long,long long>::iterator it = (m).begin(); it != (m).end() && ((k=it->first)&&(v=it->second),1); ++it)
#define fmap_char(k,v,m) for (map<char,int>::iterator it = (m).begin(); it != (m).end() && ((k=it->first)&&(v=it->second),1); ++it)
#define fmap_string(k,v,m) for (map<string,int>::iterator it = (m).begin(); it != (m).end() && ((k=it->first)&&(v=it->second),1); ++it)
#define fmap_pair(k,v,m) for (map<pair<int,int>,int>::iterator it = (m).begin(); it != (m).end() && ((k=it->first)&&(v=it->second),1); ++it)

// ----------------- SET ITERATORS -----------------
#define fmap_set(s,m) for (set<int>::iterator it = (m).begin(); it != (m).end() && ((s=*it),1); ++it)
#define fmap_set_ll(s,m) for (set<long long>::iterator it = (m).begin(); it != (m).end() && ((s=*it),1); ++it)
#define fmap_set_char(s,m) for (set<char>::iterator it = (m).begin(); it != (m).end() && ((s=*it),1); ++it)
#define fmap_set_string(s,m) for (set<string>::iterator it = (m).begin(); it != (m).end() && ((s=*it),1); ++it)

// ----------------- VECTOR ITERATORS -----------------
#define fvec_int(x,v) for (vector<int>::iterator it = (v).begin(); it != (v).end() && ((x=*it),1); ++it)
#define fvec_ll(x,v) for (vector<long long>::iterator it = (v).begin(); it != (v).end() && ((x=*it),1); ++it)
#define fvec_char(x,v) for (vector<char>::iterator it = (v).begin(); it != (v).end() && ((x=*it),1); ++it)
#define fvec_string(x,v) for (vector<string>::iterator it = (v).begin(); it != (v).end() && ((x=*it),1); ++it)

int getNbUnique(vector<int>& freq) {
    int count = 0 ;
    for (int i = 0 ; i < 26 ; i++) {
        if (freq[i] > 0) {
            count++ ;
        }
    }
    return count ;
}

int getMaxVal(vector<int>& freq) {
    int maxVal = 0 ;
    for (int i = 0 ; i < 26 ; i++) {
        if (freq[i] > maxVal) {
            maxVal = freq[i] ;
        }
    }
    return maxVal ;
}

int getMinVal(vector<int>& freq) {
    int minVal = INT_MAX ;
    for (int i = 0 ; i < 26 ; i++) {
        if (freq[i] > 0 && freq[i] < minVal) {
            minVal = freq[i] ;
        }
    }
    return minVal ;
}

void solve() {
    // int n; cin >> n;
    // vector<int> arr(n);
    // read_vector(arr,n);
    string s ; 
    cin >> s ;
    int k ; 
    cin >> k ;
    vector<int> freq(26,0) ;
    int left = 0 ;
    int right = 0 ;
    int max_len = 0 ;
    int maxFreq = 0;


    while (right < s.size()) {
        freq[s[right]-'A']++ ;
        maxFreq = max(maxFreq, freq[s[right] - 'A']);

        while ((right - left + 1) - maxFreq > k) {
            freq[s[left]-'A']-- ;
            left++ ;
        }
        max_len = max(right - left + 1, max_len) ;
        right++ ;
    }

    cout << max_len << endl ;

}

int main() {
    fast_io;

    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}