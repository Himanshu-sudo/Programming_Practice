#include<bits/stdc++.h>
using namespace std;

int N = 1e7 + 10;
vector<int> is_prime(N, 1);
vector<int> lp(N, -1), hp(N, -1);

int main() {
    is_prime[0] = is_prime[1] = 0;

    for (int i = 2; i < N; i++) {
        if (is_prime[i] == true) {
            for (int j = 2 * i; j < N; j += i) {
                is_prime[j] = false;
                hp[j] = i;
                if (lp[j] == -1) {
                    lp[j] = i;
                }
            }
        }
    }

    int num;
    cin >> num;
    cout << is_prime[num] << " " << lp[num] << " " << hp[num] << "\n";
    
    return 0;
}