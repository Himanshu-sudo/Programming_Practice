#include<bits/stdc++.h>
using namespace std;

string isBalanced(string s) {
    stack<char> st ; 
    int n = s.size() ; 

    for(int i = 0 ; i < n ; i++){
        if(s[i] == '{' || s[i] == '(' || s[i] == '['){
            st.push(s[i]) ; 
        }
        else if(s[i] == '}' && !st.empty() && st.top() == '{'){
            st.pop() ;  
        }
            
        else if(s[i] == ')' && !st.empty() && st.top() == '('){
            st.pop() ;  
        }
        else if(s[i] == ']' && !st.empty() && st.top() == '['){
            st.pop() ;  
        }
        else{
            return "NO" ; 
        }
    }

    if(st.empty()){
        return "YES" ; 
    }
    else{
        return "NO" ; 
    }
}
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\input.txt", "r", stdin);
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\output.txt", "w", stdout);
    #endif

    int n ; 
    cin>>n ; 

    while(n--){
        string s ; 
        cin>>s ; 
        cout<<isBalanced(s)<<"\n" ; 
    }
    return 0;
}