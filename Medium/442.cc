class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map <int, int> table;
        for (int i = 0; i < nums.size(); i++) {
            if (table.find(nums.at(i)) != table.end()) {
                table[nums.at(i)]++;
            } else {
                table.insert({nums.at(i), 1});
            }
        }
        
        vector<int> ret {};
        for (auto j : table) {
            if (j.second > 1) {
                ret.push_back(j.first);
            }
        }
        
        return ret;
    }
};