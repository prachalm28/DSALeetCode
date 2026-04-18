public class Solution {
    public int FindMaxConsecutiveOnes(int[] nums) {
        int i,count=0,maxCount=0;
        for(i=0;i<nums.Length;i++)
        {
            if(nums[i]==1)
            {
                count++;
                maxCount = Math.Max(count, maxCount);
            }
            if(nums[i]==0)
            {
                count=0;
            }
        }
        return maxCount;
    }
}