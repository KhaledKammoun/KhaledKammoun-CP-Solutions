#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false);

bool verif(const vector<long long>& v, long long val) {
    for (long long num : v) {
        long long diff = abs(num - val);
        if (diff == 0 || (diff & (diff - 1)) != 0) {
            return false;
        }
    }
    return true;
}

int main() {
    fast;
    
    int t;
    cin >> t;
    vector<long long> v(t);
    for (int i = 0; i < t; i++) {
        cin >> v[i];
    }
    
    sort(v.begin(), v.end()) ;
    
    vector<long long> result;
    for (int i = 0; i < t; i++) {
        long long val = v[i];
        vector<long long> subvector = {val};

        for (int j = 0; j < 32; j++) {
            long long val_1 = val + (1LL << j);
            
            bool val_1_visited = binary_search(v.begin(), v.end(), val_1);
            if (val_1_visited && verif(subvector, val_1)) {
                
                subvector.push_back(val_1);
            }else {
                
                long long val_2 = val - (1LL << j);
                bool val_2_visited = binary_search(v.begin(), v.end(), val_2);
                if (val_2 > 0 && val_2_visited && verif(subvector, val_2)) {
                    subvector.push_back(val_2);

                }
            }
        }

        if (subvector.size() > result.size()) {
            result = move(subvector);
        }
    }

    cout << result.size() << endl;
    for (long long num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
