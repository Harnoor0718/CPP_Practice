
class Solution {
public:
    bool isValid(vector<vector<int>>& grid, int r,int c,int n,int expVal){
        if(r<0 || c<0 || r>=n || c>=n || grid[r][c] != expVal){
            return false;
        }

        if(expVal == n*n - 1){
            return true;
        }
        //8 possible moves
        bool ans1 = isValid(grid, r-2,c+1,n,expVal+1);
        bool ans2 = isValid(grid, r-1,c+2,n,expVal+1);
        bool ans3 = isValid(grid, r+1,c+2,n,expVal+1);
        bool ans4 = isValid(grid, r+2,c+1,n,expVal+1);
        bool ans5 = isValid(grid, r+2,c-1,n,expVal+1);
        bool ans6 = isValid(grid, r+1,c-2,n,expVal+1);
        bool ans7 = isValid(grid, r-1,c-2,n,expVal+1);
        bool ans8 = isValid(grid, r-2,c-1,n,expVal+1);

        return ans1 || ans2 || ans3 || ans4 || ans5 || ans6 || ans7 || ans8 ;
    }
    bool checkValidGrid(vector<vector<int>>& grid) {
        return isValid(grid,0,0,grid.size(),0);
    }
};
