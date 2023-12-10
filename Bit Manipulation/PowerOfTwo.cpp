#include<bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n) {
    int count = 0;
    
    for (int i = 31; i >= 0; i--) {
        if ((n & (1 << i)) != 0){
            count++;
        }

        if (count > 1) {
            return false;
        }
    }
    if (count == 1) {
        return true;
    }
    else{
        return false;
    }
}

// simplest way to find the power of two is 

bool powerOfTwoSimple(int n) {
    if ((n & (n - 1)) == 0) { // Here n - 1 is always going to unset the last bit from left side so the set bit is going to be unset.
        return true;
    }
    else {
        return false;
    }
}

int main() {
    cout << powerOfTwoSimple(2048) << "\n";
    return 0;
}