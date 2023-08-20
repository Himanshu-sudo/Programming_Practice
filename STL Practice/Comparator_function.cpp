#include<bits/stdc++.h>
using namespace std;

bool revsort(int a , int b){
    return a > b ; 
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\input.txt", "r", stdin);
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\output.txt", "w", stdout);
    #endif

    int n ; 
    cin >> n ; 
    int a[n] ;

    for(int i = 0 ; i < n ; i++){
        cin >> a[i] ; 
    } 

    sort(a , a + n) ; 

    for(int elem : a){
        cout << elem << " " ;
    }
    cout<<"\n" ; 
    int* lower = lower_bound(a , a + n , 3) ; 
    int* upper = upper_bound(a , a + n , 4) ; 

    cout << *lower << " " << *upper <<endl ;

    return 0;
}