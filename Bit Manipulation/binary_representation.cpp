#include<bits/stdc++.h>
using namespace std;

void print_binary(int num){
    for(int i = 31; i >= 0; i--){
       if((num & (1 << i)) != 0){
        cout << "1";
       }
       else{
        cout << "0";
       }
    }
    cout << "\n";
}

int main() {
    // printing binary representation of a number.
    int n;
    cout << "Enter a number you wish to find binary representation of \n";
    cin >> n;
    print_binary(n);
    return 0;
}