class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Phase 1: Finding the intersection point of two runners.
        int slow = nums[0];
        int fast = nums[0];

        do {
            slow = nums[slow];           // move by 1 step
            fast = nums[nums[fast]];     // move by 2 steps
        } while (slow != fast);

        // Phase 2: Finding the entrance to the cycle (duplicate)
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];           // move by 1 step
            fast = nums[fast];           // move by 1 step
        }

        return slow; // or return fast
    }
};

