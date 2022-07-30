class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int result = nums[0];
        for(int i = 1, imax = result, imin = result; i < nums.size(); i++) {
            if(nums[i] < 0)
                swap(imax, imin);
            
            imax = max(nums[i], imax*nums[i]);
            imin = min(nums[i], imin*nums[i]);
            
            result = max(result, imax);
        }
        return result;
    }
};