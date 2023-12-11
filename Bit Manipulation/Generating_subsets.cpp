#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> generateSubsets(vector<int> set_numbers) {
    vector<vector<int>> result;
    int n = set_numbers.size();
    int subset_count = (1 << n);

    for (int mask = 0; mask < subset_count; mask++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            if ((mask & (1 << i)) != 0) {
                subset.push_back(set_numbers[i]);
            }
        }
        result.push_back(subset);
    }
    return result;
}

int main() {
    int n; // n should be less than or equal to 32.
    cin >> n;
    vector<int> set_numbers(n);

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        set_numbers[i] = num;
    }

    vector<vector<int>> result = generateSubsets(set_numbers);

    cout << "{";
    for (auto elements : result) {
        cout << "{";

        int subset_size = elements.size();
        for (int i = 0; i < subset_size; i++) {
            if (i == (subset_size - 1)) {
                cout << elements[i];
            }
            else{
                cout << elements[i] << ", ";
            }
        }

        cout << "} ";
    }
    cout << "}";
    cout << "\n";
    cout << "Size = " << result.size() << "\n";
    cout << "\n";
    return 0;
}