#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>> &mat, int r, int c, string path, vector<string> &ans, vector<vector<bool>> &vis, int n){
    if (r < 0 || c < 0 || r >= n || c >= n || mat[r][c] == 0 || vis[r][c] == true){
        return;
    }

    if (r == n - 1 && c == n - 1){
        ans.push_back(path);
        return;
    }

    vis[r][c] = true;
    helper(mat, r + 1, c, path + "D", ans, vis, n); // down
    helper(mat, r - 1, c, path + "U", ans, vis, n); // up
    helper(mat, r, c - 1, path + "L", ans, vis, n); // left
    helper(mat, r, c + 1, path + "R", ans, vis, n); // right
    vis[r][c] = false; // backtrack
}

vector<string> findPath(vector<vector<int>> &mat){
    int n = mat.size();
    vector<string> ans;
    vector<vector<bool>> vis(n, vector<bool>(n, false));
    if (mat[0][0] == 1)
        helper(mat, 0, 0, "", ans, vis, n);
    return ans;
}

int main(){
    vector<vector<int>> mat = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    vector<string> ans = findPath(mat);
    for (string path : ans){
        cout << path << endl;
    }

    return 0;
}
