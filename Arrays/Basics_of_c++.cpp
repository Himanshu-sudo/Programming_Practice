#include<iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("/home/himanshu/Programming/input.txt", "r", stdin);
        freopen("/home/himanshu/Programming/output.txt", "w", stdout);
    #endif
    /*
    // Overflow , precision errors and calculations order.
    int a = 100000 ; 
    int b = 100000 ; 

    long int c = a * 1LL *  b ;    // Now it will have correct answer.
    cout<<c<<endl ;    // In this case c will still have the wrong o/p unless it is 
    // converted to long long ans.

    // Question...
    Calculate the area of rectangle where the range lies as follows
        1<=length <= 10^9
        1<=bredth<= 10^9
    */

    int length ; 
    int bredth ; 

    cin>>length>>bredth ; 

    cout<<length * 1LL * bredth<<endl ; 

    return 0;
}