#include<bits/stdc++.h>
using namespace std ;

// The solution got accepted in the very first attempt. Good start !! :)

int main() {
    int n ; 
    cin >> n ; 

    while(n--){
        string word ; 
        cin >> word ; 
        int wsize = word.size() ; 

        if(wsize > 10){
            string newword ; 
            newword.push_back(word[0]) ; 
            int restsize = wsize - 2 ;  

            if(restsize <= 9){
                newword.push_back('0' + restsize) ; 
            }
            else{
                newword.push_back('0' + restsize/10) ; 
                newword.push_back('0' + restsize % 10) ; 
            }

            newword.push_back(word[wsize - 1]) ; 
            cout << newword << "\n" ; 
        }
        else{
            cout << word << "\n" ; 
        }
    }
    return 0 ;
}