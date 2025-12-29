class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count[3] = {0, 0, 0};
        for (int num : nums) {
            count[num]++;
        }

        int i = 0;
        for (int color = 0; color < 3; color++) {
            while (count[color]--) {
                nums[i++] = color;
            }
        }
    }
};