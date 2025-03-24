#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        // Step 1: Sort the meetings by start day.
        sort(meetings.begin(), meetings.end());

        // Step 2: Merge overlapping meetings.
        vector<vector<int>> merged;
        for (const auto& meeting : meetings) {
            if (merged.empty() || merged.back()[1] < meeting[0]) {
                // No overlap, add the current meeting to merged
                merged.push_back(meeting);
            } else {
                // Overlap, merge with the last meeting in merged
                merged.back()[1] = max(merged.back()[1], meeting[1]);
            }
        }

        // Step 3: Calculate the total number of days covered by merged meetings.
        int coveredDays = 0;
        for (const auto& interval : merged) {
            coveredDays += (interval[1] - interval[0] + 1);
        }

        // Step 4: Return the available days (total days - covered days).
        return days - coveredDays;
    }
};

int main(){
    return 0;
}
