class SubrectangleQueries {
    public:
        SubrectangleQueries(vector<vector<int>>& rectangle) : rectangle {rectangle} {}

        void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
            for (int i = row1; i <= row2; i++) {
                for (int j = col1; j <= col2; j++) {
                    this->rectangle.at(i).at(j) = newValue;
                }
            }
        }

        int getValue(int row, int col) {
            return this->rectangle.at(row).at(col);
        }
    private:
        vector<vector<int>> rectangle;
};

// The first medium that I do is easier than most easy's, bruh