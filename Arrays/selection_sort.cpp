#include<bits/stdc++.h>
using namespace std;

void selection_sort(int arr[] , int n){
    for(int i = 0 ; i < n ; i++){
        int minindex = i ; 
        for(int j = i + 1 ; j < n ; j++){
            if(arr[j] < arr[minindex]){
                minindex = j ; 
            }
        }

        swap(arr[i] , arr[minindex]) ; 
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("/home/himanshu/Programming/input.txt", "r", stdin);
        freopen("/home/himanshu/Programming/output.txt", "w", stdout);
    #endif

    int n ; 
    cin>>n ; 
    int arr[n] ; 

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i] ; 
    }

    selection_sort(arr , n) ; 

    for(int elem : arr){
        cout<<elem<<" " ; 
    }

    return 0;
}