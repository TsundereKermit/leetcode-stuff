class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = candies.at(0);
        
        for (int i = 1; i < candies.size(); i++) {
            if (candies.at(i) > max) {
                max = candies.at(i);
            }
        }
        
        vector<bool> ret {};
        for (int j = 0; j < candies.size(); j++) {
            if (candies.at(j) + extraCandies >= max) {
                ret.push_back(true);
            } else {
                ret.push_back(false);
            }
        }
        
        return ret;
    }
};