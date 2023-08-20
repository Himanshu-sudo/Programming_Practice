#include<bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums2) {
    stack<int> nge ; 
    int n = nums2.size() ;
    vector<int> resnums2(n , -1) ;       

    // nge.push(nums2[n - 1]) ; 
    for(int i = 0 ; i < n ; i++){
        while(!nge.empty() && nge.top() <= nums2[i]){
            nge.pop() ; 
        }

        if(nge.empty()){
            nge.push(nums2[i]) ; 
        }
       
        else if(nums2[i] < nge.top()){
            resnums2[i] = nge.top() ; 
            nge.push(nums2[i]) ; 
        }
        
    }

    return resnums2 ; 
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\input.txt", "r", stdin);
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\output.txt", "w", stdout);
    #endif

    int n ; 
    cin>>n ; 
    vector<int> nums2(n) ; 

    for(int i = 0 ; i < n ; i++){
        cin>>nums2[i] ; 
    }

    vector<int> result = nextGreaterElement(nums2) ; 

    for(int elem : result){
        cout<<elem<<" " ; 
    }
    return 0;
}