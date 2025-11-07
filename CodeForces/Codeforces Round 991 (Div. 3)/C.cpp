#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;

        // Calculate the sum of digits
        int sum = 0;
        for (char c : n) {
            sum += (c - '0');
        }

        // If the number is already divisible by 9, output YES
        if (sum % 9 == 0) {
            cout << "YES" << endl;
            continue;
        }

        // Check if replacing one digit with its square makes it divisible by 9
        bool result = false;
        for (char c : n) {
            int digit = c - '0';
            int new_sum = sum - digit + digit * digit; // Adjust sum
            if (digit * digit <= 9 && new_sum % 9 == 0) {
                result = true;
                break;
            }
        }

        cout << (result ? "YES" : "NO") << endl;
    }
    return 0;
}
