class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0, high  = nums.size()-1, n = nums.size();
        
        while(low < high) {
            int mid = (low + high)/2;
            if(nums[mid] > nums[high]) low = mid + 1;
            else high = mid;
        }
        
        int rotatedIndex = low;
        low = 0, high = nums.size()-1;
        
        while(low <= high) {
            int mid = (low+high)/2;
            int rotatedMid = (mid+rotatedIndex)%n;
            if(nums[rotatedMid] == target) return rotatedMid;
            else if(nums[rotatedMid] < target) low = mid +1;
            else high = mid -1;
        }
        
        return -1;
    }
};