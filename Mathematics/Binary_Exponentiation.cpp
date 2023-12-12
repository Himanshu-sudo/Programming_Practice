#include<bits/stdc++.h>
using namespace std;
// Binary exponentiation is nothing but an algorithm to calculate the power a ^ b.
/*But we have power function for that, why there was a need for Binary exponentiation?
----The simple answer is because of precision errors. double can store large numbers but it does not store them accurately.
so that is why the pow(2, 3) returns a double value which can be inaccurate.

So one way to calculate power of a number is to multiply it n number of times and return the ans. But that is not an efficient way 
that above solution is of time O(n).
In Binary exponentiation we use divide and conquer by dividing power into two and then further dividing it.
*/

int binary_exponentiation(int a, int b) {
    if (b == 0) {
        return 1;
    }
    int res = binary_exponentiation(a, b / 2);
    if ((b % 2) != 0) {
        return a * res * res;
    }
    else {
        return res * res;
    }
}

// example 3 ^ 13 --> here 13 can be written in binary as 1101. which is 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0 --> 8 + 4 + 0 + 1 which is 13
// so it is actually 3 ^ (8 + 4 + 0 + 1) which can be written as 3^8 * 3^4 * 3^0 * 3^1.
int binary_exponentiation_iterative(int a, int b) {
    int ans = 1;
    while (b != 0) {
        if ((b & 1) != 0) {
            ans *= a; // a will only be multiplied to answer if the bit is set there.
        }
        b >>= 1;
        a *= a; // The power of 3 is going to double with each iteration as 1 2 4 8 16 This is the binary value for each bit.
    }
    return ans;
}

int main() {
    cout << binary_exponentiation(2, 7) << "\n";
    cout << binary_exponentiation_iterative(2, 7) << "\n";
    return 0;
}