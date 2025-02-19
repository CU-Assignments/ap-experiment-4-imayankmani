class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currentSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]); // Restart or extend subarray
            maxSum = max(maxSum, currentSum); // Update max sum
        }

        return maxSum;
    }
};
