class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix.at(0).size();
        int sum = 0;
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < columns; j++) {
                if (matrix.at(i).at(j)) {
                    if (i == 0 || j == 0) {
                        sum++;
                    } else {
                        int val = min({matrix.at(i).at(j - 1), matrix.at(i - 1).at(j), matrix.at(i - 1).at(j - 1)}) + 1;
                        matrix.at(i).at(j) = val;
                        sum += val;
                    }   
                }
            }
        }
        
        return sum;
    }
};

// My first time trying out DP, and no, please do not take it out of context.