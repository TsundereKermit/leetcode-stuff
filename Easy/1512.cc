class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int pairs = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                if (nums.at(i) == nums.at(j)) {
                    pairs++;
                }
            }
        }
        return pairs;
    }
};