#include<bits/stdc++.h>
using namespace std;

// lambda expressions are the small syntax to write functions it makes our code small
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\input.txt", "r", stdin);
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\output.txt", "w", stdout);
    #endif

    cout<<[](int x , int y){return x + y ; }(3 , 6)<<endl ; 

    // There are three more functions that we are going to see 
    // The all_of function will check the condition applied to each and every element and return true
    // The any_of function will check the condition applied to any element and return true
    // The none_of element will check the condition applied to none of the elements and return true
    
    vector<int> nums = {2 , 3 , -5 , 6} ; 
    cout<<all_of(nums.begin() , nums.end() , [](int x){return x > 0 ; })<<endl ; 
    cout<<any_of(nums.begin() , nums.end() , [](int x){return x < 0 ; })<<endl ; 
    return 0;
}