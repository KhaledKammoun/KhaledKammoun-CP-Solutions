#include <bits/stdc++.h>
using namespace std;

unordered_map<long long, long long> lengths;

bool verif(vector<long long> v, int val) {
    
    for (int i = 0; i < v.size(); i++) {
        long long var_1 = abs(v[i] - val);
        auto it = lengths.find(var_1);
        if (it == lengths.end()){
            int length = 0;
            while (var_1) {
                length++;
                var_1 >>= 1;
            }
            lengths[var_1] = length - 1;
        }
        if (abs(v[i] - val) != (1LL << (lengths[var_1]))) {
            return false;
        }
    }
    return true;
}



int main() {
    int t;
    cin >> t;
    long long max_val = 0;
    vector<long long> result;
    unordered_map<long long, bool> visited;
    vector<long long> v;
    
    for (long long i = 0; i < t; i++) {
        long long n;
        cin >> n;
        visited[n] = true;
        max_val = max(max_val, n);
        v.push_back(n);
        // Precalculate lengths
 
    }

    for (int i = 0; i < t; i++) {
        vector<long long> subvector;
        long long incremented_var = 0;
        long long var_abs = v[i] + (1LL << incremented_var);
        long long var_abs_1 = v[i] - (1LL << incremented_var);
        subvector.push_back(v[i]);
        
        while (var_abs <= max_val && var_abs_1 <= max_val) {
            auto it = visited.find(var_abs);
            if (it != visited.end() && var_abs <= max_val && verif(subvector, var_abs)) {
                subvector.push_back(var_abs);
            }
            auto it_1 = visited.find(var_abs_1);
            if (it_1 != visited.end() && it == visited.end() && var_abs_1 <= max_val && verif(subvector, var_abs_1)) {
                subvector.push_back(var_abs_1);
            }
            incremented_var++;
            var_abs = v[i] + (1LL << incremented_var);
            var_abs_1 = v[i] - (1LL << incremented_var);
        }
        
        if (result.size() <= subvector.size())
            result = subvector;
    }

    cout << result.size() << endl;
    for (int i = 0; i < result.size(); i++)
        cout << result[i] << " ";
}
