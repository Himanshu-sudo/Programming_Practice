#include<bits/stdc++.h>
using namespace std;

long long no_of_ways(int n) {
    long long numerator = n * 1LL * (n - 1) * 1LL * (n - 2);
    long long ans = numerator / 6;
    return ans;
}

bool isVowel(char v) {
    return (v == 'a') || (v == 'e') || (v == 'i') || (v == 'o') || (v == 'u');
}

// generating all the subsets for each and every vowel in the name.
vector<string> subset_generation(string str) {
    vector<string> ans;
    int size = (1 << str.size());

    for (int mask = 0; mask < size; mask++) {
        string subset;
        for (int bit = 0; bit < str.size(); bit++) {
            if (mask & (1 << bit)) {
                subset.push_back(str[bit]);
            }
        }
        if (subset.size()) ans.push_back(subset);
    }
    return ans;
}

int main() {
    int test;
    cin >> test;

    while (test--) {
        int n;
        cin >> n;
        vector<string> names(n);

        for (int i = 0; i < n; i++) {
            cin >> names[i];
        }
        
        unordered_map<string, int> hash;
        
        // The approach is to generate all the possible subsets for multiple vowels in the name and
        // check how many times that subset occurs in the other names.
        for (int i = 0; i < n; i++) {
            set<char> distinct_vowels;

            for (char ch : names[i]) {
                if (isVowel(ch)) {
                    distinct_vowels.insert(ch);
                }
            }

            string vowelstr;
            for (char c : distinct_vowels) {
                vowelstr.push_back(c);
            }

            // we will increment the value of the hash for each and every subset
            vector<string> all_possible_subsets = subset_generation(vowelstr);
            for (string vowel_subsets : all_possible_subsets) {
                hash[vowel_subsets]++;
            }
        }
        
        // Let's take an example, if the count if ae is 2 and count of a and e is 3 then there is the case that some
        // other word is selected by vowel e which is the new possibility, so you don't have to substract that. 
        long long ans = 0;
        for (auto pr : hash) {
            if (pr.second < 3) continue;
            int count = pr.second;
            if (pr.first.size() % 2 == 0)
                ans -= no_of_ways(count);
            else 
                ans += no_of_ways(count);
        }
        cout << ans << "\n";
    }
    return 0;
}