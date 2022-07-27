class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> isUnique;
        for(int i = 0; i < nums.size(); i++) {
            if(isUnique.find(nums[i]) != isUnique.end())
                return true;
            isUnique.insert(nums[i]);
        }
        return false;
    }
};