class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int first = INT_MIN;
        int second = INT_MIN;
        int third = INT_MIN;
        
        for (int i = 0; i < nums.size(); i++) {
            if (nums.at(i) != first || nums.at(i) != second || nums.at(i) != third) {
                if (nums.at(i) > first) {
                    third = second;
                    second = first;
                    first = nums.at(i);
                } else if (nums.at(i) > second && nums.at(i) < first) {
                    third = second;
                    second = nums.at(i);
                } else if (nums.at(i) > third && nums.at(i) < second) {
                    third = nums.at(i);
                }
            }
        }
        
        if (third != INT_MIN) {
            return third;
        } else {
            return first;
        }
    }
};

// This runs into the issue of "what if the input is INT_MIN?". My suspicions were confirmed by LC, however, I thought it would be an interesting way to solve this question