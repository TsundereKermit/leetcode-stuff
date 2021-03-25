class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Boyer-Moore majority voting algorithm, courtesy of Wikipedia
        int val = 0; 
        int counter = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (counter == 0) {
                val = nums.at(i);
                counter = 1;
            } else if (nums.at(i) != val) {
                counter--;
            } else {
                counter++;
            }
        }
        return val;
    }
};