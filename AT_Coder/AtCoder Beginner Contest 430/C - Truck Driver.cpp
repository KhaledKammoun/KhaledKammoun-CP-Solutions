#include <bits/stdc++.h>
using namespace std;
#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr)


// O(n log n) solution
void solve_o_n_log_n() {
    int n, a, b; 
    cin >> n >> a >> b;
    string s; 
    cin >> s;

    vector<int> prefix_a(n + 1, 0), prefix_b(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix_a[i + 1] = prefix_a[i] + (s[i] == 'a');
        prefix_b[i + 1] = prefix_b[i] + (s[i] == 'b');
    }

    long long nb_pair = 0;
    int left = 0;

    for (int right = 0; right < n; ++right) {
        while (prefix_b[right + 1] - prefix_b[left] >= b) {
            left++;
        }

        int threshold = prefix_a[right + 1] - a;
        if (threshold < prefix_a[left]) continue;

        int low = left, high = right;
        int valid = left - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (prefix_a[mid] <= threshold) {
                valid = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        nb_pair += (valid - left + 1);
    }

    cout << nb_pair << endl;
}

// O(n) solution
void solve_o_n() {
    int n, A, B; 
    cin >> n >> A >> B;
    string s; 
    cin >> s;

    vector<int> prefix_a(n + 1, 0), prefix_b(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        prefix_a[i + 1] = prefix_a[i] + (s[i] == 'a');
        prefix_b[i + 1] = prefix_b[i] + (s[i] == 'b');
    }

    int left = 0, p = 0;
    long long ans = 0;

    for (int r = 0; r < n; ++r) {
        while (prefix_b[r+1] - prefix_b[left] >= B) left++;

        int threshold = prefix_a[r+1] - A;
        while (p <= r && prefix_a[p] <= threshold) p++;

        // [l = left ... p-1] where contain valid 'a' count >= threshold
        ans += max(0, p - left);
    }

    cout << ans << endl;
}



int main() {
    fast_io;
    int t = 1;
    // cin >> t;
    while (t--) solve_o_n();
    return 0;
}