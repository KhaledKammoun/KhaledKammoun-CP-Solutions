#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<ll> primes;
void sieve(int lim) {
    vector<bool> is_prime(lim+1, true);
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i <= lim; i++)
        if (is_prime[i]) {
            primes.push_back(i);
            for (ll j = (ll)i*i; j <= lim; j += i)
                is_prime[j] = false;
        }
}

void solve() {
    int n; cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
        a[i] = primes[i] * primes[i+1];
    
    for (int i = 0; i < n; i++)
        cout << a[i] << " \n"[i==n-1];
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    sieve(200000); 
    int t; cin >> t;
    while(t--) solve();
}

// -------------------------
// Problem Reflection
// -------------------------
// Core Idea (1-2 lines): Make the sequence by multiplying consecutive primes.
// Why Does This Work?: Each number is different because prime factors are unique.
// Where Can I Use This Again?: Any problem where you need numbers with unique prime factors or coprime numbers.
// -------------------------