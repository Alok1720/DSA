class Solution {
public:
    vector<int> dp;

    int helper(vector<int>& nums, int idx) {
        if (idx >= nums.size() - 1)
            return 0;

        if (dp[idx] != -1)
            return dp[idx];

        int minimum = 1e7;

        for (int i = 1; i <= nums[idx]; i++) {
            if (idx + i < nums.size()) {
                minimum = min(minimum, helper(nums, idx + i) + 1);
            }
        }

        return dp[idx] = minimum;
    }

    int jump(vector<int>& nums) {
        dp.resize(nums.size(), -1);
        return helper(nums, 0);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna