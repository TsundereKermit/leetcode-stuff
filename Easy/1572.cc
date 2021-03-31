class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        
        for (int i = 0; i < n; i++) {
            sum += mat.at(i).at(i);
            sum += mat.at(i).at(n - i - 1);
        }
        
        if (n % 2 == 1) {
            sum -= mat.at(n / 2).at(n / 2);
        }
        
        return sum;
    }
};