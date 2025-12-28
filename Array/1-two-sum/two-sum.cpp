class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            if (mp.find(complement) != mp.end()) {
                return { mp[complement], i };
            }

            mp[nums[i]] = i;
        }

        // Problem guarantees exactly one solution
        return {};
    }
};

// #include <vector>

// using namespace std;

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();

//         for (int i = 0; i < n; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 if (nums[i] + nums[j] == target) {
//                     return { i, j };
//                 }
//             }
//         }

//         // One solution is guaranteed
//         return {};
//     }
// };
