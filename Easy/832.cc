class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> ret = image;
        for (auto& row : ret) {
            for (int i = 0; i * 2 < row.size(); i++) {
                if (row.at(i) == row.at(row.size() - i - 1)) {
                    row.at(i) = row.at(row.size() - i - 1) ^= 1;
                }
            }
        }
        return ret;
    }
};