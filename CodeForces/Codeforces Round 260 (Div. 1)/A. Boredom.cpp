// ----------------- Competitive Programming Template -----------------
// Author: Khaled Kammoun
// GitHub: https://github.com/KhaledKammoun
// LinkedIn: https://www.linkedin.com/in/khaled-kammoun-6b1059308/
// #FREE_PALESTINE
// #STOP_GENOCIDE_IN_GAZA
// -------------------------------------------------------------------
// Date: 2026-01-27
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

int getResult(vector<int>& unique_elements, unordered_map<int, int>& freq, bool reverseOrder) {

    if (reverseOrder) {
        reverse(all(unique_elements));
    }

    int result = 0;
    f0(i, unique_elements.size()) {
        
        int x = unique_elements[i];
        
        if (freq[x] == 0) continue; // already used

        int sumX = x * freq[x];
        bool isThereNext = i + 1 < unique_elements.size() && freq[x + 1] != 0 && unique_elements[i + 1] == x + 1;
        int sumNext = 0;
        if (isThereNext) {
            int y = unique_elements[i + 1];
            sumNext = y * freq[y];
            
        }

        if (sumX >= sumNext || !isThereNext) {
            result += sumX;

            freq[x] = 0;
            if (isThereNext) {
                freq[x + 1] = 0;
            }

            bool isThereBefore = i - 1 >= 0 && freq[x - 1] != 0 && unique_elements[i - 1] == x - 1;
            if (isThereBefore) {
                freq[x - 1] = 0;
            }
        }
    }

    return result;


}

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    read_vector(arr,n);

    unordered_map<int, int> freq;
    f0(i, n) {
        freq[arr[i]]++;
    }

    // Sort unique elements
    vector<int> unique_elements;
    for (auto& p : freq) {
        unique_elements.pb(p.first);
    }
    sort(all(unique_elements));

    int result = getResult(unique_elements, freq, false);

    result+=getResult(unique_elements, freq, true);
    cout << result << endl;
}

int main() {
    fast_io;

    int t = 1;
    // cin >> t; // uncomment if multiple test cases
    while (t--) {
        solve();
    }

    return 0;
}