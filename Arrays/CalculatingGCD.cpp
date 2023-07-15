/*You are given an array A of integers of size N. 
You will be given Q queries where each query is represented by two integers L, R. 
You have to find the gcd(Greatest Common Divisor) of the array after excluding 
the part from range L to R inclusive (1 Based indexing). 
You are guaranteed that after excluding the part of the array remaining array 
is non empty.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("/home/himanshu/Programming/input.txt", "r", stdin);
        freopen("/home/himanshu/Programming/output.txt", "w", stdout);
    #endif

    int t ; 
    cin>>t ; 

    while(t--){
        int q , n ; 
        cin>>n>>q ; 

        int arr[n + 1] ; 
        int forward[n + 1] ; 
        int backward[n + 2] ; 
        forward[0] = 0 ; 
        backward[n + 1] = 0 ; 

        for(int i = 1 ; i < n + 1 ; i++){
            cin>>arr[i] ; 
        }

        for(int i = 1 ; i < n + 1 ; i++){
            forward[i] = __gcd(forward[i - 1] , arr[i]) ;
            backward[n - i + 1] = __gcd(backward[n - i + 2] , arr[n - i + 1]) ; 
        }

        while(q--){
            int l , r ; 
            cin>>l>>r ; 
            int gc = __gcd(forward[l - 1] , backward[r + 1]) ; 

            cout<<gc<<endl ; 
        }
    }

    
    return 0;
}