class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        set<vector<int>> uniqueTriplets;

        for(int i = 0; i < n; i++) {
            int tar = -nums[i];
            set<int> s;

            for(int j = i + 1; j < n; j++) {
                int third = tar - nums[j];

                if(s.find(third) != s.end()) {
                    vector<int> trip = {nums[i], nums[j], third};
                    sort(trip.begin(), trip.end());
                    uniqueTriplets.insert(trip);
                }
                s.insert(nums[j]);
            }
        }

        for (auto& trip : uniqueTriplets)
            ans.push_back(trip);

        return ans;
    }
};

