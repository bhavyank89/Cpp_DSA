class Solution {
    public:
        bool searchMatrix(vector<vector<int>>& matrix, int target) {
            int row = 0;
            int coloumn = matrix[0].size()-1;
            while(row<matrix.size()&&coloumn>=0){
                if(matrix[row][coloumn]==target)
                return true;
                else if(matrix[row][coloumn]<target)
                row++;
                else
                coloumn--;
            }
            return false;
        }
    };