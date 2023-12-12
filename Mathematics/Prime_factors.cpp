#include<bits/stdc++.h>
using namespace std;

// There is also an efficient way to find the prime factors using sieve algorithm.
vector<int> primeFactors(int num) {
    vector<int> prime_factors;
    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            prime_factors.push_back(i);
            num /= i;
        }
    }
    if (num > 1) {
        prime_factors.push_back(num);
    }
    return prime_factors;
}

int main() {
    vector<int> result;
    int num;
    cin >> num;
    result = primeFactors(num);

    for (int elem : result) {
        cout << elem << " ";
    }
    cout << "\n";
    return 0;
}