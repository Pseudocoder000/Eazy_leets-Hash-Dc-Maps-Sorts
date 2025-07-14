class Solution {
public:
     vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numIndex;  // stores number -> index
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            if (numIndex.find(complement) != numIndex.end()) {
                return {numIndex[complement], i};
            }
            numIndex[nums[i]] = i;
        }
        return {};  // this line won't be reached since a solution is guaranteed
    }
};