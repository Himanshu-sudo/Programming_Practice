#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

long long lcm(int a, int b) {
    return ((a * 1LL * b) / gcd(a, b));
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int N = 2e5 + 10;
    vector<int> hash(N, 0);
    
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a[i] = temp;
        hash[a[i]]++;
    }

    unordered_map<int, int> count_of_divisors;

    for (int i = 1; i < N; i++) {
        for (int j = i; j < N; j += i) {
            count_of_divisors[i] += hash[j];
        }
    }

    int t;
    cin >> t;

    while (t--) {
        int p, q;
        int result;
        cin >> p >> q;
        result = count_of_divisors[p] + count_of_divisors[q];
        long long common = lcm(p, q);
        if (common < N) {
            result -= count_of_divisors[common];
        }
        cout << result << "\n";
    }
    return 0;
}