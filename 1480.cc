class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int size = nums.size();
        vector <int> ret {};
        ret.push_back(nums.at(0));
        for (int i = 1; i < size; i++) {
            int sum = ret.at(i-1) + nums.at(i);
            ret.push_back(sum);
        }
        return ret;
    }
};