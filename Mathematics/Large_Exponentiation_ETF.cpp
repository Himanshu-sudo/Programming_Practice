#include<bits/stdc++.h>
using namespace std;

// Some mathematics involved
/*
This is the method used when the value of b becomes very large in a ^ b.
we can only give the value of b upto 10^18 which can be stored in long long and we can easily find the solution.
but the power of b can also exceed 10^18 and can be 10^36 or more than that, in that case we cannot store it into any 
datatype so in that case we are going to use this method to find the power.

So Here we are going to reduce b into smaller number
First let's see what are coprime numbers:
a and b are coprime if the gcd(a, b) = 1.
next let's see what is ETF --> Euler totient function
so ETF of N is basically count of all the numbers between 1 to N which are coprime with N.
So ETF value of 5 is 1, 2, 3, 4. Because all the numbers less than 5 are coprime with 5 
ETF of prime number N is N - 1.
ETF formula is ETF(n) = n * product_of_all(1 - 1/p) where p are the prime factors of n, so we take product of all the prime 
factors here.
Euler's theorem says that a^b = a^b % ETF(n) % n --> a^b % n = (a^b % ETF(n)) % n
So we can reduce the value of b by taking modulo of it by ETF(n).
and you don't have to worry of taking coprimes, in most of the contests M will be given as a prime number.
and ETF(M) is M - 1. ETF is also denoted by phi symbol in maths.
*/

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

    return 0;
}