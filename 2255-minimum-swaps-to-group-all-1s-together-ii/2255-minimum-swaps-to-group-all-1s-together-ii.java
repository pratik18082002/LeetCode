class Solution {
    public int minSwaps(int[] nums) {
        int total1=0; // total number of 1 in nums
        int count=0; // total number of 1 in window of size total1
        int n=nums.length;
        for(int i=0;i<n;i++){
            total1+=nums[i];
        }
        for(int i=0;i<total1;i++){
            count+=nums[i];
        }
        int maxCount=count; //total number of 1 in any window of size total1
        for(int i=1;i<n;i++){
            count-=nums[i-1];
            count+=nums[(i+total1-1)%n];
            maxCount=Math.max(maxCount,count);
        }
        return total1-maxCount;
    }
}