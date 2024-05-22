#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int j = 0; j < t; j++) {
        int n;
        cin >> n;
        string s = to_string(n);
        vector<int> v;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] != '0') {
                int pos_value = 1;
                for (int k = 0; k < s.size() - i - 1; k++) {
                    pos_value *= 10;
                }
                int value = (s[i] - '0') * pos_value;
                v.push_back(value);
            }
        }

        cout << v.size() << endl;
        for (auto res : v) {
            cout << res << " ";
        }
        cout << endl;
    }

    return 0;
}
