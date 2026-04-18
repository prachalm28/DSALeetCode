public class Solution {
    public int SingleNumber(int[] nums) {
        int i,j=0;
        for(i=0;i<nums.Length;i++)
        {
            j^=nums[i];
        }
        return j;
    }
}