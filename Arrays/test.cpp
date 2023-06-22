#include<iostream>
using namespace std ; 

int main(){
    #ifndef ONLINE_JUDGE
        freopen("/home/himanshu/Programming/input.txt", "r", stdin);
        freopen("/home/himanshu/Programming/output.txt", "w", stdout);
    #endif
    
    int arr[5] ; 
    //cout<<"Enter element inside the array " ; 
    for(int i = 0 ; i < 5 ; i++){
        cin>>arr[i] ; 
    }

    //cout<<"The elements of the array are " ; 

    for(int i = 0 ; i < 5 ; i++){
        cout<<4 * arr[i]<<" " ;
    }
    cout<<endl ; 
    return 0 ; 
}