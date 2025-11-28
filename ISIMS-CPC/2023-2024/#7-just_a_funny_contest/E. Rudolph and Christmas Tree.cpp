#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int k = 0; k < t; k++) {
        int n;
        double b, h, sum = 0.0;
        cin >> n >> b >> h;
        double prev_base;
        for (int i = 0; i < n; i++) {
            double curr_base;
            cin >> curr_base;
            sum += (0.5 * b * h);
            if (i > 0 && curr_base < prev_base + h) {
                sum -= (0.5 * (b / h * (prev_base + h - curr_base)) * (prev_base + h - curr_base));
            }
            prev_base = curr_base;
        }
        cout << fixed << setprecision(15) << sum << endl;
    }
    return 0;
}
