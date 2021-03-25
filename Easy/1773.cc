class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int matches = 0;
        int type;
        if (ruleKey == "type") {
            type = 0;
        } else if (ruleKey == "color") {
            type = 1;
        } else {
            type = 2;
        }
        for (int i = 0; i < items.size(); i++) {
            if (items.at(i).at(type) == ruleValue) 
                matches++;
        }
        return matches;
    }
};