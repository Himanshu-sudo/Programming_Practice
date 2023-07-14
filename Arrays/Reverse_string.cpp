#include<iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("/home/himanshu/Programming/input.txt", "r", stdin);
        freopen("/home/himanshu/Programming/output.txt", "w", stdout);
    #endif

    string s ; 
    cin>>s ; 

    for(int i = s.size() - 1 ; i >= 0 ; i--){
        cout<<s[i] ; 
    }
    cout<<"\n" ; 
    return 0;
}