class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0, left_sum = 0;
        
        // Compute the total sum of the array
        for (int num : nums) {
            total_sum += num;
        }
        
        // Iterate through the array to check for pivot index
        for (int i = 0; i < nums.size(); i++) {
            if (left_sum == total_sum - left_sum - nums[i]) {
                return i;  // Found pivot index
            }
            left_sum += nums[i];  // Update left sum
        }
        
        return -1;  // No pivot index found
    }
};
