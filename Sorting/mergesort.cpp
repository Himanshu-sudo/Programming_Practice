#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right){
    int left_size = mid - left + 1 ; 
    int right_size = right - mid ; 
    int left_array[left_size + 1] ; 
    int right_array[right_size + 1] ;

    for(int i = 0 ; i < left_size ; i++){
        left_array[i] = arr[i + left] ; 
    } 

    for(int i = 0 ; i < right_size ; i++){
        right_array[i] = arr[mid + 1 + i] ; 
    }

    left_array[left_size] = INT_MAX ; 
    right_array[right_size] = INT_MAX ; 

    int leftpointer = 0 ; 
    int rightpointer = 0 ; 

    for(int i = left ; i <= right ; i++){
        if(left_array[leftpointer] < right_array[rightpointer]){
            arr[i] = left_array[leftpointer] ; 
            leftpointer++ ; 
        }
        else{
            arr[i] = right_array[rightpointer] ; 
            rightpointer++ ; 
        }
    }
}

void mergesort(int arr[], int left, int right){

    if(left < right){
        int mid = left + (right - left) / 2 ; 

        mergesort(arr, left, mid) ; 
        mergesort(arr, mid + 1 , right) ; 
        merge(arr, left, mid, right) ; 
    }
}

int main()
{
    // #ifndef ONLINE_JUDGE
    //     freopen("/home/himanshu/Programming/input.txt", "r", stdin);
    //     freopen("/home/himanshu/Programming/output.txt", "w", stdout);
    // #endif

    int n ; 
    cin>>n ;

    int arr[n] ; 

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i] ; 
    }

    mergesort(arr , 0 , n - 1) ; 

    for(int elem : arr){
        cout<<elem<<" " ; 
    }
    return 0;
}