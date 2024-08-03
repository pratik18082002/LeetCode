class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int total1 = 0; // total number of 1 in vector
        int count = 0;  // total number of 1 in window of size total1
        int max1 = 0;   // maximum number of 1 in any window of size total1
        int n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            total1 += nums[i];
        }
        for (int i = 0; i < total1; i++){
            count += nums[i];
        }
        max1 = count;
        for (int i = 1; i < n; i++) {
            count += nums[(i + total1 - 1) % n];
            count -= nums[i - 1];
            max1 = max(max1, count);
        }
        return total1 - max1;
    }
};