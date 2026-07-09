class Solution {
public:
    vector<vector<int>> ans;
    vector<int> temp;

    void backtrack(vector<int>& candidates, int target, int start) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = start; i < candidates.size(); i++) {

            // Skip duplicate elements
            if (i > start && candidates[i] == candidates[i - 1])
                continue;

            // Since array is sorted, no need to continue
            if (candidates[i] > target)
                break;

            temp.push_back(candidates[i]);

            // Move to next index (cannot reuse the same element)
            backtrack(candidates, target - candidates[i], i + 1);

            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());

        backtrack(candidates, target, 0);

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna