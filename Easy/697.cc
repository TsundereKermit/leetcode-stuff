class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        
        // Create map of each number, its count, first index, and length of smallest array containing all instances
        unordered_map<int, vector<int>> table;
        for (int i = 0; i < nums.size(); i++) {
            if (table.count(nums.at(i)) == 0) {
                vector<int> vec {1, i, 1};
                table[nums.at(i)] = vec;
            } else {
                // Increment count
                table[nums.at(i)].at(0)++;
                // Update length
                table[nums.at(i)].at(2) = i - table[nums.at(i)].at(1) + 1;
            }
        }
        
        // Cycle through map to find lowest length with largest count
        int degree = 1;
        int lowest_len = 1;
        for (auto j : table) {
            if (j.second.at(0) > degree) {
                degree = j.second.at(0);
                lowest_len = j.second.at(2);
            } else if (j.second.at(0) == degree) {
                if (j.second.at(2) < lowest_len) {
                    lowest_len = j.second.at(2);
                }
            }
        }
        
        return lowest_len;
    }
};