#include<bits/stdc++.h>
using namespace std;


void generateParenthesis(int open , int close , string& s , vector<string>& result) {
    if(open == 0 && close == 0){
        result.push_back(s) ; 
        return ; 
    }

    if(open > 0){
        s.push_back('(') ; 
        generateParenthesis(open - 1 , close , s , result) ; 
        s.pop_back() ; 
    }

    if(close > open){
        s.push_back(')') ; 
        generateParenthesis(open , close - 1 , s , result) ; 
        s.pop_back() ; 
    }

}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\input.txt", "r", stdin);
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\output.txt", "w", stdout);
    #endif

    vector<string> result ;
    string s ; 

    generateParenthesis(4 , 4 , s , result) ; 

    for(string elem : result){
        cout<<elem<<" " ; 
    } 
    return 0;
}