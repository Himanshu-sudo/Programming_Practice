#include<bits/stdc++.h>
using namespace std;

// calculating the sum(n , a) where a is the array and we are going to find the sum till nth index

int summation(int n , int a[]){
    if(n == 0){
        return a[n] ; 
    }
    else{
        return a[n] + summation(n - 1 , a) ; 
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

    int arr[n] ; 

    for(int i = 0 ; i < n ; i++){
        cin>>arr[i] ; 
    }

    cout<<summation(n - 1 , arr)<<"\n" ; 
     
    return 0;
}