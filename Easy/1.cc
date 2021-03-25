class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret {};
        for (int i = 0; i < nums.size(); i++) {
            int desiredNum = target - nums.at(i);
            for (int j = i + 1; j < nums.size(); j++) {
                if (desiredNum == nums.at(j)) {
                    ret.push_back(i);
                    ret.push_back(j);
                    break;
                } 
            }
        }
        return ret;
    }
};

// Comment: can definitely improve with hash maps 