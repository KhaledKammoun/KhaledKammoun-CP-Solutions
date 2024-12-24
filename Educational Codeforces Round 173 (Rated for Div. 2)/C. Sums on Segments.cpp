// This code is not mine. I copied it from another source.

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
struct Range {
    ll a, b;
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        int special = -1;
        bool has1 = false, hasMinus1 = false;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) has1=true;
            if(a[i]==-1) hasMinus1=true;
            if(a[i]!=1 && a[i]!=-1){
                special = i;
            }
        }
        vector<Range> ranges;
        if(special==-1){
            // No special element
            // Compute min_sum and max_sum
            // Compute max_sum
            ll current_max = a[0];
            ll max_sum = a[0];
            for(int i=1;i<n;i++){
                current_max = max(a[i], current_max + a[i]);
                max_sum = max(max_sum, current_max);
            }
            // Compute min_sum
            ll current_min = a[0];
            ll min_sum = a[0];
            for(int i=1;i<n;i++){
                current_min = min(a[i], current_min + a[i]);
                min_sum = min(min_sum, current_min);
            }
            if(has1 && hasMinus1){
                ranges.push_back(Range{min_sum, max_sum});
            }
            else if(has1){
                ranges.push_back(Range{1, (ll)n});
            }
            else{
                ranges.push_back(Range{(ll)(-n), -1LL});
            }
            ranges.push_back(Range{0,0});
        }
        else{
            ll x = a[special];
            // Split into left and right
            vector<ll> left, right;
            for(int i=0;i<special;i++) left.push_back(a[i]);
            for(int i=special+1;i<n;i++) right.push_back(a[i]);
            // Compute min_sum and max_sum for left
            ll min_sum_left=0, max_sum_left=0;
            if(left.empty()){
                min_sum_left = 0;
                max_sum_left = 0;
            }
            else{
                // Max sum
                ll current_max = left[0];
                max_sum_left = left[0];
                for(int i=1;i<left.size();i++){
                    current_max = max(left[i], current_max + left[i]);
                    max_sum_left = max(max_sum_left, current_max);
                }
                // Min sum
                ll current_min = left[0];
                min_sum_left = left[0];
                for(int i=1;i<left.size();i++){
                    current_min = min(left[i], current_min + left[i]);
                    min_sum_left = min(min_sum_left, current_min);
                }
            }
            // Compute min_sum and max_sum for right
            ll min_sum_right=0, max_sum_right=0;
            if(right.empty()){
                min_sum_right = 0;
                max_sum_right = 0;
            }
            else{
                // Max sum
                ll current_max = right[0];
                max_sum_right = right[0];
                for(int i=1;i<right.size();i++){
                    current_max = max(right[i], current_max + right[i]);
                    max_sum_right = max(max_sum_right, current_max);
                }
                // Min sum
                ll current_min = right[0];
                min_sum_right = right[0];
                for(int i=1;i<right.size();i++){
                    current_min = min(right[i], current_min + right[i]);
                    min_sum_right = min(min_sum_right, current_min);
                }
            }
            // Compute suffix sums for left
            ll min_suffix_left = LLONG_MAX, max_suffix_left = LLONG_MIN;
            if(left.empty()){
                min_suffix_left = 0;
                max_suffix_left = 0;
            }
            else{
                ll sum =0;
                for(int i=left.size()-1;i>=0;i--){
                    sum += left[i];
                    min_suffix_left = min(min_suffix_left, sum);
                    max_suffix_left = max(max_suffix_left, sum);
                }
                min_suffix_left = min(min_suffix_left, 0LL);
                max_suffix_left = max(max_suffix_left, 0LL);
            }
            // Compute prefix sums for right
            ll min_prefix_right = LLONG_MAX, max_prefix_right = LLONG_MIN;
            if(right.empty()){
                min_prefix_right = 0;
                max_prefix_right = 0;
            }
            else{
                ll sum =0;
                for(auto num:right){
                    sum += num;
                    min_prefix_right = min(min_prefix_right, sum);
                    max_prefix_right = max(max_prefix_right, sum);
                }
                min_prefix_right = min(min_prefix_right, 0LL);
                max_prefix_right = max(max_prefix_right, 0LL);
            }
            // Compute min and max sum containing x
            ll min_sum_containing_x = min_suffix_left + x + min_prefix_right;
            ll max_sum_containing_x = max_suffix_left + x + max_prefix_right;
            // Collect ranges
            ranges.push_back(Range{min_sum_left, max_sum_left});
            ranges.push_back(Range{min_sum_right, max_sum_right});
            ranges.push_back(Range{min_sum_containing_x, max_sum_containing_x});
            ranges.push_back(Range{0,0});
        }
        // Sort ranges
        sort(ranges.begin(), ranges.end(), [&](const Range &a, const Range &b)->bool{
            if(a.a != b.a) return a.a < b.a;
            return a.b < b.b;
        });
        // Merge ranges
        vector<Range> merged;
        for(auto &r: ranges){
            if(merged.empty()){
                merged.push_back(r);
            }
            else{
                Range &last = merged.back();
                if(r.a <= last.b +1){
                    last.b = max(last.b, r.b);
                }
                else{
                    merged.push_back(r);
                }
            }
        }
        // Collect all sums
        vector<ll> sums;
        for(auto &r: merged){
            for(ll val = r.a; val <= r.b; val++) sums.push_back(val);
        }
        // Remove duplicates and sort
        sort(sums.begin(), sums.end());
        sums.erase(unique(sums.begin(), sums.end()), sums.end());
        // Output
        cout<<sums.size()<<"\n";
        for(auto val:sums) cout<<val<<" ";
        cout<<"\n";
    }
}
