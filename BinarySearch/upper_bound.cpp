#include<bits/stdc++.h>
using namespace std;

int lower_bound(vector<int>& nums , int element){
    int low = 0 ; 
    int high = nums.size() - 1 ; 

    while(high - low > 1){
        int mid = low + (high - low) / 2 ;
        if(nums[mid] < element){
            low = mid + 1 ; 
        }
        else{
            high = mid ; 
        }
    }

    if(nums[low] >= element){
        return low ; 
    }
    else if(nums[high] >= element){
        return high ; 
    }
    else{
        return -1 ; 
    }
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\input.txt", "r", stdin);
    //     freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\output.txt", "w", stdout);
    // #endif

    int n ; 
    cin >> n ; 

    vector<int> nums(n) ; 

    for(int i = 0 ; i < n ; i++){
        cin >> nums[i] ; 
    }

    cout << lower_bound(nums , 9) << endl ; 

    return 0;
}