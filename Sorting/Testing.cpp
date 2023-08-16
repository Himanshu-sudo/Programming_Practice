#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\input.txt", "r", stdin);
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\output.txt", "w", stdout);
    #endif

    int size ; 
    cin>>size ; 

    int arr[size] ; 

    for(int i = 0 ; i < size ; i++){
        cin>>arr[i] ; 
    }

    for(int element : arr){
        cout<<element<<" " ; 
    }
    return 0;
}