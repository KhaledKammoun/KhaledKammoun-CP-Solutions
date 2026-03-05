// ----------------- Competitive Programming Template -----------------
// Author: Khaled Kammoun
// GitHub: https://github.com/KhaledKammoun
// LinkedIn: https://www.linkedin.com/in/khaled-kammoun-6b1059308/
// #FREE_PALESTINE
// #STOP_GENOCIDE_IN_GAZA
// -------------------------------------------------------------------
// Date: 2026-02-26
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

int getMinArr(vector<vector<int>>& arr,
              unordered_map<int,bool>& visited_arr,
              unordered_map<int,bool>& visited,
              vector<int>& ptr) {

    int best = -1;

    auto advance = [&](int i, int p) {
        while (p < (int)arr[i].size() && visited[arr[i][p]]) p++;
        return p;
    };

    for (int i = 0; i < (int)arr.size(); i++) {
        if (visited_arr[i]) continue;

        int pi = advance(i, ptr[i]);
        if (pi >= (int)arr[i].size()) continue;

        if (best == -1) {
            best = i;
            continue;
        }

        int pj = advance(best, ptr[best]);
        int a = pi, b = pj;

        // lexicographic compare from current pointer
        while (a < (int)arr[i].size() && b < (int)arr[best].size()) {
            if (visited[arr[i][a]]) { a++; continue; }
            if (visited[arr[best][b]]) { b++; continue; }
            if (arr[i][a] != arr[best][b]) {
                if (arr[i][a] < arr[best][b]) best = i;
                break;
            }
            a++; b++;
        }

        // if all equal but i is shorter, prefer it
        if (a >= (int)arr[i].size() && b < (int)arr[best].size()) {
            best = i;
        }
    }

    return best;
}

void solve() {
    int n; cin >> n;
    vector<vector<int>> arr(n);
    for (int i = 0 ; i < n ; i++) {
        int l; cin >> l;
        vector<int> temp;
        unordered_set<int> seen;

        for (int j = 0; j < l; j++) {
            int x; cin >> x;
            if (seen.count(x) == 0) {
                temp.push_back(x);
                seen.insert(x);
            }
        }

        reverse(temp.begin(), temp.end());
        arr[i] = temp;
    }

    // cout << "----" << endl ;
    // for (int i = 0; i < n; i++) {
    //     cout << "Blog " << i << ": ";
    //     for (int x : arr[i]) cout << x << " ";
    //     cout << endl;
    // }

    vector<int> result;
    unordered_map<int,bool> visited_arr;
    unordered_map<int,bool> visited;
    vector<int> ptr(n, 0);

    while (true) {
        int current_arr_index = getMinArr(arr, visited_arr, visited, ptr);
        if (current_arr_index == -1) break; // ✅ stop safely

        visited_arr[current_arr_index] = true;
        // cout << "Blog : " << current_arr_index << endl;

        while (ptr[current_arr_index] < (int)arr[current_arr_index].size()) {
            int num = arr[current_arr_index][ptr[current_arr_index]];
            ptr[current_arr_index]++;
            if (!visited[num]) {
                visited[num] = true;
                result.push_back(num);
            }
        }
    }

    for (int x : result) cout << x << " ";
    cout << "\n";
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