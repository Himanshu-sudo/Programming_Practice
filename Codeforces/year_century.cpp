#include<bits/stdc++.h>
using namespace std;

int year_century(int year){
    return (year / 100) + ((year % 100 == 0) ? 0 : 1) ; 
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\input.txt", "r", stdin);
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\output.txt", "w", stdout);
    #endif

    int year ; 

    cin >> year ; 

    cout << year_century(year) << "\n" ; 
    return 0;
}