// This code is not mine. I copied it from another source.

#include <bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

vector<int> determineDigits(ll n, ll d) {
    vector<int> ans;

    if (n >= 1) {
        ans.push_back(1);
    }
    if (n >= 3 || d % 3 == 0) {
        ans.push_back(3);
    }
    if (d == 5) {
        ans.push_back(5);
    }
    if (n >= 3 || (n == 2 && d == 7)) {
        ans.push_back(7);
    }
    if (n >= 6) {
        ans.push_back(9);
    } else {
        ll factorial = 1;
        int i = 2;
        while (i <= n) {
            factorial *= i;
            i++;
        }
        if ((factorial * d) % 9 == 0) {
            ans.push_back(9);
        }
    }

    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll n, d;
        cin >> n >> d;

        vector<int> ans = determineDigits(n, d);

        for (int digit : ans) {
            cout << digit << " ";
        }
        cout << "\n";
    }

    return 0;
}