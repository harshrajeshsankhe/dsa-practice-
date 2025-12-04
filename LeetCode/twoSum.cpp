//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//You may assume that each input would have exactly one solution, and you may not use the same element twice.

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index
        
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            
            // if the pair value exists, return indices
            if (mp.find(diff) != mp.end()) {
                return { mp[diff], i };
            }
            
            // store current value and index
            mp[nums[i]] = i;
        }
        
        return {}; // though problem guarantees 1 solution
    }
};
