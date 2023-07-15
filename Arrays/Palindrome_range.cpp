/*Check if in a range given on a string for q queries, the alphabets in that range can be
rearranged to form a palindrome*/

/*5
abcec
1 2
2 5
3 5
1 5
1 4*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
        freopen("/home/himanshu/Programming/input.txt", "r", stdin);
        freopen("/home/himanshu/Programming/output.txt", "w", stdout);
    #endif

    int q; 
    cin>>q ; 

    string s ; 
    cin>>s ; 

    int n = s.size() ; 
    vector<vector<int>> alphabet_count(26 , vector<int>(n , 0)) ; 

    for(int i = 0 ; i < n ; i++){
        alphabet_count[s[i] - 'a'][i]++ ; 
    }

    for(int i = 0 ; i < 26 ; i++){
        for(int j = 1 ; j < n ; j++){
            alphabet_count[i][j] = alphabet_count[i][j] + alphabet_count[i][j - 1] ; 
        }
    }

    while(q--){
        int l , r ; 
        cin>>l>>r ; 
        
        bool odd_occurance = false ; 
        bool flag = true ; 
        for(int i = l ; i <= r ; i++){
            int check = alphabet_count[s[i] - 'a'][r] - alphabet_count[s[i] - 'a'][l - 1] ;
            
            if((check % 2 != 0)){
                if(!odd_occurance){
                    odd_occurance = true ;
                }
                else{
                    flag = false ; 
                    break ; 
                }
            }
        }

        if(flag){
            cout<<"YES"<<endl ; 
        }
        else{
            cout<<"NO"<<endl ; 
        }
    }

    return 0;
}