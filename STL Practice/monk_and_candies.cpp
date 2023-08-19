#include<bits/stdc++.h>
using namespace std;

// Monk and the Magical Candy Bags

long long consumeCandies(multiset<long long> &candies , int k){
	long long maxcandies = 0 ; 
	while(k--){
		int size = candies.size() ; 
		if(size > 0){
			auto eat = candies.begin() ; 
			long long candy = -1 * (*eat) ;  
			maxcandies += candy ;  
			
			candies.erase(eat) ;
			candy = candy / 2 ; 
			if(candy > 0){
				candies.insert(-candy) ; 
			}
		 }
		
	}

	return maxcandies ; 
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\input.txt", "r", stdin);
        freopen("C:\\Users\\Himanshu\\Desktop\\Programming_Practice\\output.txt", "w", stdout);
    #endif

    int test ; 
	cin>>test ; 

	while(test--){
		int N , K ; 
		cin>>N>>K ; 

		multiset<long long> candies ; 

		for(int i = 0 ; i < N ; i++){
			 long long no ; 
			 cin>>no ; 
			 candies.insert(-no) ;   // storing the input in -ve value to get the largest in the 
                                    // beginning.
		}

		cout<<consumeCandies(candies , K)<<"\n" ; 
	}

    return 0;
}