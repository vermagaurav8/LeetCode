class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int MAX = 0, area = 0;
        int end = height.size()-1;
        int start = 0;
        
        while(end != start) {
            if(height[end] > height[start]) {
                area = height[start]*(end-start);
                start += 1;
            } else {
                area = height[end]*(end-start);
                end -= 1;
            }
            
            MAX = max(MAX, area);
        }
        
        return MAX;
    }
};