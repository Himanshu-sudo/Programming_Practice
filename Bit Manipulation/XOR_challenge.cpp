#include<bits/stdc++.h>
using namespace std;

int main() {
    int c;
    cin >> c;
    if (c == 0) {
        cout << "1\n";
    }
    else if (c == 1) {
        cout << "0\n";
    }
    else {
        int power = 4;
        int no_of_bits = 2;
        
        while (c >= power) {
            no_of_bits++;
            power <<= 1;
        }

        int first_number = (1 << (no_of_bits - 1)) - 1;
        int second_number = c ^ first_number;
        // cout << no_of_bits << "\n";
        // cout << first_number << " " << second_number << "\n";
        cout << first_number * 1LL * second_number << "\n";
    }
    return 0;
}