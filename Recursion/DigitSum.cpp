#include<bits/stdc++.h>
using namespace std;

// To find the sum of all the digits in the number.

int digSum(int num){
    if(num == 0){
        return 0 ; 
    }
    else{
        return (num % 10) + digSum(num / 10) ; 
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\input.txt", "r", stdin);
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\output.txt", "w", stdout);
    #endif

    int num ; 
    cin>>num ; 

    cout<<digSum(num)<<"\n" ; 
    return 0;
}