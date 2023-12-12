#include<bits/stdc++.h>
using namespace std;

int N = 1e7 + 10;
vector<bool> is_prime(N, 1);

void sieve() {
    is_prime[0] = is_prime[1] = false;
    
    for (int i = 2; i < N; i++) {
        if (is_prime[i] == true) {
            for (int j = 2 * i; j < N; j += i) {
                is_prime[j] = false;
            }
        }
    }
}

int main() {
    sieve();
    int num;
    cin >> num;
    if (is_prime[num]) {
        cout << "prime" << "\n";
    }
    else {
        cout << "not prime" << "\n";
    }
    return 0;
}