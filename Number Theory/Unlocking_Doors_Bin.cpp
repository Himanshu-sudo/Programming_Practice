#include<bits/stdc++.h>
using namespace std;

int binary_exponentiation(int a, int b, int m) {
    int ans = 1;
    while (b != 0) {
        if ((b & 1) != 0) {
            ans = (ans * 1LL * a) % m;
        }
        a = (a * 1LL * a) % m;
        b >>= 1;
    }
    return ans;
}

int main() {
    int m = 1e9 + 7;
    int N = 1e5 + 7;
    vector<int> fact(N, 1);

    for (int i = 2; i < N; i++) {
        fact[i] = (fact[i - 1] * 1LL * i) % m;
    }

    int test;
    cin >> test;

    while (test--) {
        int n, k;
        cin >> n >> k;
        int ans = fact[k];
        ans = (ans * 1LL * binary_exponentiation(fact[k - n], m - 2, m)) % m;
        cout << ans << "\n";
    }
    return 0;
}