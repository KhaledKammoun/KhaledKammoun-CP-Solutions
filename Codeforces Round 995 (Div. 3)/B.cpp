#include <bits/stdc++.h>
using namespace std;

#define FAST ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define newL cout << endl;
#define ll long long;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int result = (n / (a + b + c) * 3);
        if (result != 0){
            n %= (a + b + c);
        }

        int t[3] = {a, b, c};

        for (int i = 0; i < 3; i++) {
            if (n >= t[i]) {
                result++;
                n -= t[i];
            } else if (n > 0){
                result++; 
                break;
            }
        }

        cout << result << endl;
    }
    return 0;
}
