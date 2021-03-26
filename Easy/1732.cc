class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max = 0;
        int cur = 0;
        for (int i = 0; i < gain.size(); i++) {
            cur += gain.at(i);
            if (cur > max) {
                max = cur;
            }
        }
        
        return max;
    }
};

// Thought this was a trick question, turns out it's just this easy