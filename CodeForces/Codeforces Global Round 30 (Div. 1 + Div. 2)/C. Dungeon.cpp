#include <bits/stdc++.h>
using namespace std;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)
#define ll long long
#define ull unsigned long long
#define all(x) (x).begin(), (x).end()
#define pb push_back
#define endl '\n'
#define MOD 1000000007LL

// ----------------- Macros -----------------
#define read_vector(v,n) for (int i = 0; i < n; i++) cin >> v[i];
#define print_vector(v) for (auto &x : v) cout << x << ' '; cout << endl;
#define print_vector_pair(v) for (auto &[first, second] : v) cout << first << " " << second << endl;
#define print_map(m) for (auto &[k,v] : m) cout << k << ": " << v << endl;

#define f(i,x,n) for (int i = x; i < n; i++)
#define f0(i,n) for (int i = 0; i < n; i++)
#define f1(i,n) for (int i = 1; i <= n; i++)
#define fmap(k,v,m) for (auto &[k,v] : m)


// --- IMPORTANT NOTE ---
// Still not solved


void solve() {
     int n, m;
    cin >> n >> m;
    vector<ll> arr(n);
    vector<ll> brr(m), crr(m);

    read_vector(arr,n);
    read_vector(brr,m);
    read_vector(crr,m);

    vector<pair<ll, ll>> monsters(m);
    for (int i = 0; i < m; i++)
        monsters[i] = {brr[i], crr[i]};

    sort(arr.begin(), arr.end());
    sort(monsters.begin(), monsters.end());

    multiset<ll> swords(arr.begin(), arr.end());
    int kills = 0;

    for (auto it = monsters.begin(); it != monsters.end(); ++it) {
        ll life = it->first;
        ll reward = it->second;
        auto sword_it = swords.lower_bound(life);
        if (sword_it == swords.end()) break;
        ll sword = *sword_it;
        swords.erase(sword_it);
        kills++;
        if (reward > 0)
            swords.insert(max(sword, reward));
    }

    cout << kills << endl;
}

int main() {
    fast_io;

    int t = 1;
    cin >> t; // uncomment if multiple test cases
    while (t--) {
        solve();
    }

    return 0;
}