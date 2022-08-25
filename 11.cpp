class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0;
        int left = 0, right = height.size() - 1;

        while (left < right){
            max = std::max(max, (right - left) * std::min(height[left],height[right]));
            
            if(height[left] < height[right]){
                left++;
            }else{
                right--;
            }
        }
        return max;
        
    }
};
