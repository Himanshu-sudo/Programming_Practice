#include<iostream>
using namespace std;

char upper(char c){
    return 'A' + (c - 'a') ;    // One way to convert character to upper case.
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("/home/himanshu/Programming/input.txt", "r", stdin);
        freopen("/home/himanshu/Programming/output.txt", "w", stdout);
    #endif

    while(true){
        string s ; 
        cin>>s ; 

        if(s.size() == 0){
            break ; 
        }

        string temp ; 
        for(int i = 0 ; i < s.size() ; i++){
            temp.push_back(upper(s[i])) ; 
        }

        cout<<temp<<" " ; 
    }
    return 0;
}