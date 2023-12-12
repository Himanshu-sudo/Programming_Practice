#include<bits/stdc++.h>
using namespace std;

// LCM can be calculated in O(1) if we know the GCD
// The formula for finding LCM is a * b / GCD where a and b are the two numbers of which we want to find the LCM.
// GCD can be calculated by long division method which is also euclidean method.
/* The long division method is in such a way that. if a and be are the numbers then divide the larger number with a smaller number
after that the divide the divisor with the remainder and this process continues until the remainder is 0 */

// The time conplexity of this method is log(n)
int gcd(int a, int b) {
    if (b == 0) return a; // in if condition we can also write that if (a % b == 0) return b; but just one extra recursion call will happen
    return gcd(b, a % b); // This is the long division that we implement.
    // Now you must be thinking that a should be greater than b. BUT even if a < b it will get swapped in the recursion itself.
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b); // The formula for finding LCM if we know gcd.
}

int main() {
    cout << gcd(12, 18) << "\n";
    cout << lcm(12, 18) << "\n";
    cout << gcd(1, 20) << "\n";
    cout << gcd(11, 4) << "\n";
    return 0;
}