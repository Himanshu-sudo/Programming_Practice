#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\input.txt", "r", stdin);
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\output.txt", "w", stdout);
    #endif

    int n ; 
    cin>>n ; 

    vector<int> nums(n) ; 

    for(int i = 0 ; i < n ; i++){
        cin>>nums[i] ; 
    }

    int small = *min_element(nums.begin() , nums.end()) ; 
    cout<<small<<endl ; 
    int large = *max_element(nums.begin() , nums.end()) ; 
    cout<<large<<endl ; 

    int sum = accumulate(nums.begin() , nums.end() , 0) ;   
    cout<<sum<<endl ; 
    
    int ct = count(nums.begin() , nums.end() , 5) ; 
    cout<<ct<<endl ; 

    auto it = find(nums.begin() , nums.end() , 3) ;

    if(it != nums.end()){
        cout<<*it<<endl ; 
    } 
    else{
        cout<<"The Element is not Found"<<endl ; 
    }

    reverse(nums.begin() , nums.end()) ; 

    for(int element : nums){
        cout<<element<<" " ; 
    }

    cout<<endl ; 
    string a = "abcdefghijklmnopqrstuvwxyz" ; 
    reverse(a.begin() , a.end()) ; 
    cout<<a<<endl ; 
    return 0 ;  
}