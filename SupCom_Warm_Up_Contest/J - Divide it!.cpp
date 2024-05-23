#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        int x = 0;
        bool possible = true;

        while (n > 1) {
            if (n % 5 == 0) {
                n = (4 * n) / 5;
            } else if (n % 3 == 0) {
                n = (2 * n) / 3;
            } else if (n % 2 == 0) {
                n = n / 2;
            } else {
                possible = false;
                break;
            }
            x++;
        }

        if (possible) {
            cout << x << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
