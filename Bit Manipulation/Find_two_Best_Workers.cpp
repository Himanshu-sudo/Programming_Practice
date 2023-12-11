#include<bits/stdc++.h>
using namespace std;

int count_set_bits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n = (n & (n - 1));
    }
    return count;
}

pair<int, pair<int, int>> solution(vector<int>& working_days) {
    int n = working_days.size();
    int max_days = INT_MIN;
    int first_worker = -1;
    int second_worker = -1;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int common_days = count_set_bits(working_days[i] & working_days[j]);

            if (max_days < common_days) {
                first_worker = i;
                second_worker = j;
                max_days = common_days;
            }
        }
    }
    return {max_days, {first_worker, second_worker}};
}

int main() {
    int N;
    cin >> N;
    vector<vector<int>> working_days(N);
    vector<int> working_days_bits;

    for (int i = 0; i < N; i++) {
        int days;
        cin >> days;
        int temp = 0;
        while(days--) {
            int day;
            cin >> day;
            working_days[i].push_back(day);
            temp = (temp | (1 << day));
        }
        working_days_bits.push_back(temp);
    }
    
    pair<int, pair<int, int>> result = solution(working_days_bits);
    cout << "max_days = " << result.first << " first worker is " << result.second.first << " second worker is " << result.second.second << "\n";
    return 0;
}