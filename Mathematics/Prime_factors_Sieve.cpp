#include<bits/stdc++.h>
using namespace std;

int N = 1e7 + 10;
vector<int> is_prime(N, 1);
vector<int> lp(N, -1), hp(N, -1);

int main() {

    for (int i = 0; i < N; i++) {
        lp[i] = i;
        hp[i] = i;
    }

    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i < N; i++) {
        if (is_prime[i] == true) {
            for (int j = 2 * i; j < N; j += i) {
                is_prime[j] = false;
                hp[j] = i;
                if (lp[j] == j) {
                    lp[j] = i;
                }
            }
        }
    }

    int num;
    cout << "Enter the input" << "\n";
    cin >> num;
    vector<int> prime_factors;
    
    while (num > 1) {
        int prime_factor = lp[num];
        while (num % prime_factor == 0) {
            prime_factors.push_back(prime_factor);
            num /= prime_factor;
        }
    }

    for (int elem : prime_factors) {
        cout << elem << " ";
    }
    cout << "\n";
    return 0;
}