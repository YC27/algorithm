//
// Created by yc on 2025/4/10.
//
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.count(target - nums[i])) {
                return {mp[target - nums[i]], i};
            } else {
                mp[nums[i]] = i;
            }
        }
        return {};
    }
};