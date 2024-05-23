#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <climits>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    std::set<int> s;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        int var;
        cin >> var;
        v[i] = var ;
    }
    for (int i = 0; i < n; i++){
        s.insert(v[n - i- 1]) ;
        v[n - i- 1] = s.size() ;
    }
    for (int i = 0; i < m; i++) {
        int var;
        cin >> var;
        cout << v[var-1]<< endl;
    }
    return 0;
}