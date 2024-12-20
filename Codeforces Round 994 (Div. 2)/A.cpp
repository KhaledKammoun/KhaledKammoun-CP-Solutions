#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        int nb_0 = 0;
        int nonZeroSegments = 0;

        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 0)
                nb_0++;
        }

        for (int i = 0; i < n; i++) {
            if (v[i] != 0 && (i == 0 || v[i - 1] == 0)) {
                nonZeroSegments++;
            }
        }

        if (nb_0 == n) {
            cout << 0 << endl;
        } else if (nonZeroSegments == 1) {
            cout << 1 << endl;
        } else {
            cout << 2 << endl;
        }
    }

    return 0;
}
