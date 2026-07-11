class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        bool contains_one = false;

        for (int x : nums) {
            if (x == 1) {
                contains_one = true;
                break;
            }
        }

        if (!contains_one)
            return 1;

        int n = nums.size();

        if (n == 1)
            return 2;

        // Replace invalid numbers with 1
        for (int i = 0; i < n; i++) {
            if (nums[i] <= 0 || nums[i] > n)
                nums[i] = 1;
        }

        // Mark visited numbers
        for (int i = 0; i < n; i++) {
            int x = abs(nums[i]);      // <-- Fixed here
            if (nums[x - 1] > 0)
                nums[x - 1] *= -1;
        }

        // Find first positive index
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0)
                return i + 1;
        }

        return n + 1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna