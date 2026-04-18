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

// HashSet<int> set = new HashSet<int>();

//         foreach (int num in nums) {
//             if (set.Contains(num)) {
//                 set.Remove(num);
//             } else {
//                 set.Add(num);
//             }
//         }

//         // Only one element will remain
//         foreach (int num in set) {
//             return num;
//         }