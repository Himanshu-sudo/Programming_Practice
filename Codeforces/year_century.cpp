#include<bits/stdc++.h>
using namespace std;

int year_century(int year){
    return (year / 100) + ((year % 100 == 0) ? 0 : 1) ; 
}
int main()
{
    int year ; 

    cin >> year ; 

    cout << year_century(year) << "\n" ; 
    return 0;
}