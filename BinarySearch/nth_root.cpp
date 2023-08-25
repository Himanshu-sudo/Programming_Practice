#include<bits/stdc++.h>
using namespace std;

double multiply(double n , int p){
    double product = 1 ; 
    while(p--){
        product *= n ; 
    }
    
    return  product; 
}

double nth_root(int n , int p){
    double low = 0 ; 
    double high = n ; 
   

    while(high - low > 0.000000001){
        double mid = (double)(low + (double)((high - low) / 2)) ; 
        // cout << mid << endl ; 
        if(multiply(mid , p) < n){
            low = mid ; 
        }
        else{
            high = mid ; 
        }
    }

    return low ; 
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\input.txt", "r", stdin);
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\output.txt", "w", stdout);
    #endif

    int n , p ;
    cin >> n >> p ; 


    cout << nth_root(n , p) << endl ; 
    // cout << "Hello my name is Himanshu" << endl ; 

    return 0;
}