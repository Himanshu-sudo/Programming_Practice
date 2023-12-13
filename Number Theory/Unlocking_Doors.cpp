#include <iostream>
using namespace std;

int main() {
	int test;
	cin >> test;
	int mod = 1e9 + 7;
	int result;

	while (test--) {
		int alphabets, length;
        result = 1;
		cin >> length >> alphabets;

		for (int i = 0; i < length; i++) {
			result = ((result % mod) * 1LL * ((alphabets - i) % mod)) % mod;
		}
        cout << result << "\n";
	}
	
	return 0;
}