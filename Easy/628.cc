class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int size = nums.size();
        int num1 = nums.at(0) * nums.at(1) * nums.at(size - 1);
        int num2 = nums.at(size - 1) * nums.at(size - 2) * nums.at(size - 3);
        
        if (num1 > num2) {
            return num1;
        } else {
            return num2;
        }
    }
};