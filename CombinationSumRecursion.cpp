class Solution {
public:
    void solve(int idx, vector<int>& candidates, int target, vector<int>& path, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(path);
            return;
        }
        if (target < 0 || idx >= candidates.size()) return;

        // Include the current number
        path.push_back(candidates[idx]);
        solve(idx, candidates, target - candidates[idx], path, ans);
        path.pop_back(); // backtrack

        // Exclude the current number and move to next
        solve(idx + 1, candidates, target, path, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> path;
        solve(0, candidates, target, path, ans);
        return ans;
    }
};

