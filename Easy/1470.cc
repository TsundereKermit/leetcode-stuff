class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int xn, yn;
        vector <int> ret;
        for (int i = 0; i < n; i++) {
            ret.push_back(nums.at(i));
            ret.push_back(nums.at(n + i));
        }
        return ret;
    }
};