class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int numJewels = 0;
        for (int i = 0; i < stones.size(); i++) {
            if (jewels.find(stones.at(i)) != -1) {
                numJewels++;
            }
        }
        return numJewels;
    }
};