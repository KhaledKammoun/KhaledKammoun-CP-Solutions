// ----------------- Competitive Programming Template -----------------
// Author: Khaled Kammoun
// GitHub: https://github.com/KhaledKammoun
// LinkedIn: https://www.linkedin.com/in/khaled-kammoun-6b1059308/
// #FREE_PALESTINE
// #STOP_GENOCIDE_IN_GAZA
// -------------------------------------------------------------------
// Date: 2026-03-06
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

void solve() {
    int n; cin >> n;
    vector<int> arr(n);
    read_vector(arr,n);

    vector<int> index(n + 1, 0);   // index[value] = position
    for (int i = 0; i < n; i++) {
        index[arr[i]] = i;
    }

    vector<bool> deleted(n, false); // track deleted positions
    int count = 0;

    for (int val = n; val > 1; val--) {
        int pos = index[val];

        if (deleted[pos] || pos == 0 || pos == n - 1) continue;

        int left = pos;
        int right = pos;

        // Move left to nearest non-deleted neighbor
        while (left - 1 >= 0 && deleted[left - 1]) left--;
        // Move right to nearest non-deleted neighbor
        while (right + 1 < n && deleted[right + 1]) right++;

        // If not a peak or out of bounds, skip
        if (left - 1 < 0 || right + 1 >= n) continue;
        if (!(arr[pos] > arr[left - 1] && arr[pos] > arr[right + 1])) continue;

        // Keep removing neighbors until it's no longer a peak
        while (left - 1 >= 0 && right + 1 < n && 
               arr[pos] > arr[left - 1] && arr[pos] > arr[right + 1]) {

            bool left_better = (left - 2 >= 0 && arr[left] < arr[left - 2]) || left - 2 < 0;
            bool right_better = (right + 2 < n && arr[right] < arr[right + 2]) || right + 2 >= n;

            if (left_better) {
                deleted[left - 1] = true;
                cout << "Removing left neighbor at index " << left - 1 << " with value " << arr[left - 1] << endl;
            } else if (right_better) {
                deleted[right + 1] = true;
                cout << "Removing right neighbor at index " << right + 1 << " with value " << arr[right + 1] << endl;
            } else {
                deleted[left - 1] =true;
                cout << "Removing left neighbor at index " << left - 1 << " with value " << arr[left - 1] << endl;
            }
            count++;

            // Update left/right to nearest alive neighbor
            while (left - 1 >= 0 && deleted[left - 1]) left--;
            while (right + 1 < n && deleted[right + 1]) right++;
        }
    }
    cout << count << endl;
    
}

int main() {
    fast_io;

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}