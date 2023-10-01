#include<bits/stdc++.h>
using namespace std;

long long cut_wood(vector<int>& trees , int height , int size){
    long long sum = 0 ; 
    for(int i = 0 ; i < size ; i++){
        if(height < trees[i]){
            sum += (trees[i] - height) ; 
        }
    }

    return sum ; 
}

int solution(vector<int>& trees , int req , int size , int high){
    int left = 0 ; 
    int right = high ; 

    while(right - left > 1){
        int mid = left + (right - left) / 2 ; 
        if(cut_wood(trees , mid , size) >= req){
            left = mid ; 
        }
        else{
            right = mid - 1 ; 
        }
    }

    if(cut_wood(trees , right , size) >= req) {
        return right ; 
    }
    else if(cut_wood(trees , left , size) >= req) {
        return left ; 
    }
}

int main() {
    int N , M ; 
    cin >> N >> M ; 
    vector<int> trees(N) ; 
    int high = INT_MIN ; 

    for(int i = 0 ; i < N ; i++){
        cin >> trees[i] ; 
        high = max(high , trees[i]) ; 
    }

    cout << solution(trees , M , N , high) << "\n" ; 

    return 0 ;
}