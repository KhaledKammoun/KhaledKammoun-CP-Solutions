// ----------------- Competitive Programming Template -----------------
// Author: Khaled Kammoun
// GitHub: https://github.com/KhaledKammoun
// LinkedIn: https://www.linkedin.com/in/khaled-kammoun-6b1059308/
// #FREE_PALESTINE
// #STOP_GENOCIDE_IN_GAZA
// -------------------------------------------------------------------
// Date: 2026-03-02
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

vector<bool> get_primes(int n) {
    vector<bool> primes(n + 1, true) ;

    primes[0] = false ;
    primes[1] = false ;

    for (int p = 2; p * p <= n; p++) {
        if (primes[p]) {
            for (int i = p * p; i <= n; i+=p) {
                primes[i] = false ;
            }
        }
    }

    return primes ;
}

// Function to find the prime factor structure
int primebase(int x) {
    set<int> s;
    for (int i = 2; i * i <= x; i++) {
        while (x % i == 0) {
            s.insert(i);
            x /= i;
        }
    }
    if (x > 1) s.insert(x);
    if (s.size() > 1) return -1; // Composite with multiple prime factors
    if (s.size() == 0) return 1;  // Number 1
    return *s.begin();           // Prime number
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    // If already sorted, Bob wins
    bool non_decreasing = true;
    for (int i = 1; i < n; i++) {
        if (a[i-1] > a[i]) {
            non_decreasing = false;
            break;
        }
    }
    if (non_decreasing) {
        cout << "Bob" << endl ;
        return ;
    }

    // Check prime factors for potential to create disorder
    vector<int> b(n);
    bool can_break = false;
    for (int i = 0; i < n; i++) {
        b[i] = primebase(a[i]);
        if (b[i] == -1) can_break = true; // Composite, can be split
    }

    // If cannot be broken further (all primes or 1) and sorted, Bob wins
    if (!can_break && is_sorted(b.begin(), b.end())) {
        cout << "Bob" << endl;
    } else {
        // Alice can win
        cout << "Alice" << endl;
    }
}

int main() {
    fast_io;

    int t = 1;
    cin >> t;
    vector<bool> primes = get_primes(1e6);
    while (t--) {
        solve();
    }

    return 0;
}