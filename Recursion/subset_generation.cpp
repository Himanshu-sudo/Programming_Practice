#include<bits/stdc++.h>
using namespace std;

void subsets(vector<int>& nums , vector<int>& partial , vector<vector<int>>& result , int n) {
    if(n <= 0){
        result.push_back(partial) ; 
        return ; 
    }

    partial.push_back(nums[n - 1]) ; 
    subsets(nums , partial , result , n - 1) ; 
    partial.pop_back() ; 
    subsets(nums , partial , result , n - 1) ; 
   
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\input.txt", "r", stdin);
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\output.txt", "w", stdout);
    #endif

    vector<vector<int>> result ;
    vector<int> partial ; 
    int n ;
    cin >> n ; 
    vector<int> nums(n); 

    for(int i = 0 ; i < n ; i++){
        cin >> nums[i] ; 
    }

    subsets(nums , partial , result , n) ; 

    for(vector<int> elem : result){
        for(int ele : elem){
            cout << ele << " " ; 
        }
        cout << endl ; 
    }


    cout << "The size of the result is " << result.size() << endl ; 
    return 0;
}