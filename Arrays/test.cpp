#include<iostream>
using namespace std ; 

int main(){
    int arr[5] ; 
    cout<<"Enter element inside the array " ; 
    for(int i = 0 ; i < 5 ; i++){
        cin>>arr[i] ; 
    }

    cout<<"The elements of the array are " ; 

    for(int i = 0 ; i < 5 ; i++){
        cout<<arr[i]<<" " ;
    }
    cout<<endl ; 
    return 0 ; 
}