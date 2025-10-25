#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int findMinimumTime(vector<int>& strength, int k) {
        int n = strength.size();
        sort(strength.begin(), strength.end());
        int min_time = INT_MAX;
        
        do {
            int total_time = 0;
            int X = 1;
            
            for (int i = 0; i < n; i++) {
                int time_needed = (strength[i] + X - 1) / X;
                total_time += time_needed;
                X += k;
            }
            
            min_time = min(min_time, total_time);
            
        } while (next_permutation(strength.begin(), strength.end()));
        
        return min_time;
    }
};