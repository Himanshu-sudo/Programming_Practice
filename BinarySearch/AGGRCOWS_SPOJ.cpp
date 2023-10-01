#include<bits/stdc++.h>
using namespace std ;

bool can_cows_be_kept(vector<int>& barns , int cows , int distance , int size){
    int last_occupied = 0 ; 
    for(int i = 1 ; i < size ; i++){
        if((barns[i] - barns[last_occupied]) >= distance){
            cows-- ; 
            last_occupied = i ; 
        }
        if(cows == 0){    // Made a mistake here was not checking this condition and the count of cows was going -ve.
            break ; 
        }
    }

    return cows == 0 ; 
}

int solution(vector<int>& barns , int size , int cows){
    int low = 0 ; 
    int high = barns[size - 1] - barns[0] ; 

    while(high - low > 1){
        int mid = low + (high - low) / 2 ; 
        if(can_cows_be_kept(barns , cows - 1 , mid , size)){
            low = mid ; 
        }
        else{
            high = mid - 1 ; 
        }
    }

    if(can_cows_be_kept(barns , cows - 1 , high , size)){
        return high ; 
    }
    else if(can_cows_be_kept(barns , cows - 1 , low , size)){
        return low ; 
    }
}

int main() {
    int test ; 
    cin >> test ; 

    while(test--){
        int N , C ; 
        cin >> N >> C ; 

        vector<int> barns(N) ; 
        for(int i = 0 ; i < N ; i++){
            cin >> barns[i] ; 
        }

        sort(barns.begin() , barns.end()) ; 
        cout << solution(barns , N , C) << "\n" ; 
    }

    return 0 ;
}