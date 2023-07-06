#include<iostream>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("/home/himanshu/Programming/input.txt", "r", stdin);
        freopen("/home/himanshu/Programming/output.txt", "w", stdout);
    #endif

    int size ; 
    // cout<<"Enter the size of the array"<<endl ; 
    cin>>size ; 

    int arr[size] ;

    // cout<<"Enter the elements in the array " ; 
    for(int i = 0 ; i < size ; i++){
        cin>>arr[i] ; 
    } 

    // cout<<"The even numbers from the elements that you entered are"<<endl ;

    for(int i = 0 ; i < size ; i++){
        if(arr[i] % 2 == 0){
            cout<<arr[i]<<" " ; 
        }
    } 

    cout<<endl ; 
    return 0;
}