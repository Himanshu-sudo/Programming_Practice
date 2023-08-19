#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\input.txt", "r", stdin);
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\output.txt", "w", stdout);
    #endif

    int n ; 
    cin>>n ; 

    map<int , multiset<string>> result ;  // taking care of the corner cases is very important.

    for(int i = 0 ; i < n ; i++){
        int key ; 
        string value ; 
        cin>>value>>key ; 
        result[-key].insert(value) ; 
    }

    for(auto students : result){
        for(auto names : students.second){
            cout<<names<<" "<<-students.first<<"\n" ; 
        }
        
    }

    return 0;
}