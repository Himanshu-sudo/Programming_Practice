// https://www.hackerrank.com/challenges/crush/problem

#include<bits/stdc++.h>
using namespace std;

long long array_manipulation(vector<int>& nums, int n, vector<vector<int>>& queries){
    long long largest = INT_MIN ;
    for(auto elem : queries){
        int l = elem[0] ; 
        int r = elem[1] ; 
        int sum = elem[2] ;
          

        nums[l] += sum ; 
        nums[r + 1] += -sum ; 
    }

    for(int i = 1 ; i <= n ; i++){
        nums[i] += nums[i - 1] ; 
        if(nums[i] > largest){
            largest = nums[i] ; 
        }
    }

    return largest ; 
} 

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("/home/himanshu/Programming/input.txt", "r", stdin);
        freopen("/home/himanshu/Programming/output.txt", "w", stdout);
    #endif

    int size , operations ; 
    cin>>size>>operations ; 

    vector<int> nums(size + 2 , 0) ; 

    vector<vector<int>> queries(operations , vector<int>(3)) ;

    for(int i = 0 ; i < operations ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin>>queries[i][j] ; 
        }
    }

    cout<<array_manipulation(nums , size , queries)<<endl ;

    vector<int>::iterator it ; 

    for(it = nums.begin() ; it != nums.end() ; it++){
        cout<<*it<<" " ; 
    } 

    return 0;
}