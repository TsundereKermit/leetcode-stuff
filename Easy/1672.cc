class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int banks = accounts.at(0).size();
        int customers = accounts.size();
        
        int maxWealth;
        for (int i = 0; i < customers; i++) {
            int wealth = 0;
            
            for (int j = 0; j < banks; j++) {
                wealth += accounts[i][j];
            }
            
            if (i == 0) {
                maxWealth = wealth;
            } else if (wealth > maxWealth) {
                maxWealth = wealth;
            }
        }
        
        return maxWealth;
    }
};