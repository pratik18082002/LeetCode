class Solution{
public:
    void backtrack(const vector<int> &nums, int index, int currentOR, int maxOR, int &count){
        if (currentOR == maxOR) count++;
        for (int i = index; i < nums.size(); ++i)
            backtrack(nums, i + 1, currentOR | nums[i], maxOR, count);
    }
    int countMaxOrSubsets(vector<int> &nums){
        // Step 1: Compute the maximum OR
        int maxOR = 0;
        for (int num : nums) maxOR |= num;
        // Step 2: Backtrack to count the subsets
        int count = 0;
        backtrack(nums, 0, 0, maxOR, count);
        return count;
    }
};