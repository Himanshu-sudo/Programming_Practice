#include<bits/stdc++.h>
using namespace std;
long long M = 1e18 + 7;
/* Now in Binary Exp we have assumed that the value of a and b are within 10 ^ 9 but what if they become too large.
    here we will see if the value of a and M to be very large and in ETF we will see if b is too large.
    
*/
int binary_multiplication(int, int);

int large_exponentiation(int a, int b) {
    // a = a % M we can do this if the value of a is very large. but if M is very large then even if a is 10 ^ 9 it can grow large.
    int ans = 1;
    while (b != 0) {
        if ((b & 1) != 0) {
            ans = binary_multiplication(ans, a); // a will only be multiplied to answer if the bit is set there.
        }
        b >>= 1;
        a = binary_multiplication(a, a); // The power of 3 is going to double with each iteration as 1 2 4 8 16 This is the binary value for each bit.
        // here if a = 1e9 then it becomes 1e18 in the next iteration and after that it becomes 1e36 which cannot be stored.
        // so for that we use binary multiplication.
    }
    return ans;
}

/*
So when we multiply two numbers we are basically adding one number the other number of times
example if we do 3 * 13 we are basically doing 3 + 3 + 3 + 3 + ... 13 times.
which is basically 3(13) now this 13 can be broken down in binary as 3 (1101) and if we write it in powers of two then it becomes.
 3 (8 + 4 + 0 + 1)  
*/

// With this method we can do multiplications of very large numbers.
int binary_multiplication(int a, int b) {
    int ans = 0;
    while (b != 0) {
        if ((b & 1) != 0) {
            ans = (ans + a) % M;
        }
        a = (a + a) % M;
        b >>= 1;
    }
    return ans; 
}

int main() {
    cout << binary_multiplication(13, 3) << "\n";
    cout << large_exponentiation(2, 10) << "\n";
    return 0;
}