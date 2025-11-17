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

void addMoves(set<pair<int,int>>& positions, int x, int y, int a, int b) {
    int dx[4] = {a, a, -a, -a};
    int dy[4] = {b, -b, b, -b};
    int dx2[4] = {b, b, -b, -b};
    int dy2[4] = {a, -a, a, -a};

    for (int i = 0; i < 4; i++) {
        positions.insert({x + dx[i], y + dy[i]});
        positions.insert({x + dx2[i], y + dy2[i]});
    }
}

void solve() {
    int a, b;
    cin >> a >> b;

    int kingX, kingY;
    cin >> kingX >> kingY;

    int queenX, queenY;
    cin >> queenX >> queenY;

    set<pair<int,int>> kingMoves;
    set<pair<int,int>> queenMoves;

    addMoves(kingMoves, kingX, kingY, a, b);
    addMoves(queenMoves, queenX, queenY, a, b);

    int shared = 0;
    for (auto& pos : kingMoves) {
        if (queenMoves.count(pos)) {
            shared++;
        }
    }

    cout << shared << "\n";
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