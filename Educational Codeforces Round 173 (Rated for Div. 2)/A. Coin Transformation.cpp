#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define newL cout << endl;

int main() {
    FAST;
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        if (n <= 3) {
            cout << 1 << endl;
        } else {
            int max_coins = 1;
            while (n > 3) {
                n /= 4; 
                max_coins *= 2;
            }
            cout << max_coins << endl;
        }
    }
    return 0;
}
