#include<bits/stdc++.h>
using namespace std;

bool powerOfTwo(int n){
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

int main() {
    cout << powerOfTwo(2048) << "\n";
    return 0;
}