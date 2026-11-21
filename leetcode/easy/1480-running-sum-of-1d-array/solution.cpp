class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        // Start from index 1 since index 0 stays unchanged
        for (int i = 1; i < nums.size(); ++i) {
            nums[i] += nums[i - 1];
        }
        return nums;
    }
};
