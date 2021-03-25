class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int dist = 0;
        int foundFirstOne = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) == 0) {
                dist++;
            } else {
                if (foundFirstOne && dist < k) {
                    return false;
                }
                dist = 0;
            } 
            
            // Feels very inelegant, I think this weird edge case handling can easily be made better
            if (nums.at(i) == 1) {
                foundFirstOne = 1;
            } 
        }
        return true;
    }
};