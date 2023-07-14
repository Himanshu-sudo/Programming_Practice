#include<iostream>
using namespace std;

bool is_palindrome(string& s){

    string revs ; 

    for(int i = s.size() - 1 ; i >= 0 ; i--){
        revs.push_back(s[i]) ; 
    }

    if(s == revs){
        return true ; 
    }
    else{
        return false ; 
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("/home/himanshu/Programming/input.txt", "r", stdin);
        freopen("/home/himanshu/Programming/output.txt", "w", stdout);
    #endif

    string s ; 
    cin>>s ; 
    
    if(is_palindrome(s)){
        cout<<"Yes"<<endl ; 
    }
    else{
        cout<<"No"<<endl ; 
    }
    
    return 0;
}