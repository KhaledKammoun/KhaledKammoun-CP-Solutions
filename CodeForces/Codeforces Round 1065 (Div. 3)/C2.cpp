#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        string winner = "Tie";

        for (int k = 20; k >= 0; k--) {
            vector<int> diff_indices;
            for (int i = 0; i < n; i++) {
                int abit = (a[i] >> k) & 1;
                int bbit = (b[i] >> k) & 1;
                if (abit != bbit) {
                    diff_indices.push_back(i + 1); 
                }
            }

            if (diff_indices.size() % 2 == 1) {
                int last = diff_indices.back();
                if (last % 2 == 1) {
                    winner = "Ajisai";
                } else {
                    winner = "Mai";
                }
                break;
            }
        }

        cout << winner << "\n";
    }

    return 0;
}
