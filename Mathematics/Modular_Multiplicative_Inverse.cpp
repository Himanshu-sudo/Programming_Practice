#include<bits/stdc++.h>
using namespace std;

// In modular division we have see the formula as 
/*
    (a / b) % m = ((a % m) * (b^-1 % m)) % m
    b^-1 is called as modular multiplicative inverse of b

    now if a * b = 1 then we can say that b is multiplicative inverse of a
    so if (a * b) % m = 1 then we can say that b is modular multiplicative inverse of a.
    the value of b can always lie between (1 <= b <= m) 
    -- the reason for this is because if we try to breakdown 
    (a * b) % m = 1 ==> (a % m * b % m) % m = 1 so b can always be less than m.
    Now things became easy loop from 1 to M - 1 and check this condition (a * b) % m = 1 to find the inverse.
    this is one way of finding MMI.

    *****One important point to note here is that MMI is only defined if here (a * b) % m = 1 --> a and m are coprime*****
    Optimised way of finding MMI is by Fermet's theorem-
    A ^ M - 1 = 1 mod M or A ^ M - 1 mod M = 1,
        given that M is prime and A is not a multiple of M.
    so if we multiply to the equation by A^-1 then we get 
    A ^ M - 2 % M = A ^ -1.
    so A ^ M - 2 is basically binary exponentiation and % M has to be taken simple ...
    But the problem comes when M is not prime
    So in that case the inverse can be found using Extended Euclid Algorithm
*/

int main() {

    return 0;
}