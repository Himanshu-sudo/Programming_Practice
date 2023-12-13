#include<bits/stdc++.h>
using namespace std;

const int N = 2e6 + 10;
int highest_prime[N];
bool is_present[N];
bool canRemove[N];

vector<int> distinct_prime_factors(int num) {
    vector<int> ans;
    while (num > 1) {
        int prime_factor = highest_prime[num];
        while (num % prime_factor == 0) num /= prime_factor;
        ans.push_back(prime_factor);
    }
    return ans;
}

int main() {
    // finding highest prime factor for all the numbers.
    for (int i = 2; i < N; i++) {
        if (highest_prime[i] == 0) {
            for (int j = i; j < N; j += i) {
                highest_prime[j] = i;
            }
        }
    }

    int n, q;
    cin >> n >> q;
    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        is_present[arr[i]] = 1;
    }

    canRemove[0] = canRemove[1] = 1;
    for (int i = 2; i < N; i++) {
        if (is_present[i]) {
            for (long long j = i; j < N; j *= i) {
                canRemove[j] = 1;
            }
        }
    }

    while (q--) {
        int x;
        cin >> x;
        vector<int> prime_factors = distinct_prime_factors(x);
        bool flag = false;
        int size = prime_factors.size();

        for (int i = 0; i < size; i++) {
            for (int j = i; j < size; j++) {
                long long product = prime_factors[i] * prime_factors[j];
                if ((i == j) && ((x % product) != 0)) continue;
                long long to_remove = x / product;
                if (canRemove[to_remove]) {
                    flag = true;
                    break;
                }
            }
            if (flag) {
                break;
            }
        }
        cout << (flag ? "YES\n" : "NO\n");
    }
    return 0;
}