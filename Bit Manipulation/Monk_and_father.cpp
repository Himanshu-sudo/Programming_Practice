#include<bits/stdc++.h>
using namespace std;

int count_set_bits(long long num) {
    int count = 0;
    while (num > 0) {
        num = num & (num - 1);
        count++;
    }
    return count;
}

int main() {
    int test;
    cin >> test;
    while (test--) {
        long long p;
        cin >> p;
        cout << count_set_bits(p) << "\n";
    }
    return 0;
}