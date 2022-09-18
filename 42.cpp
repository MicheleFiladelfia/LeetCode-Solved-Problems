class Solution {
public:
    int trap(vector<int>& height) {
        int maxLeft = 0;
        int maxRight = 0;
        int ans = 0;
        int left = 0;
        int right = height.size()-1;


        while(left <= right){
            maxLeft = max(maxLeft, height[left]);
            maxRight = max(maxRight, height[right]);

            if(maxLeft < maxRight){
                ans += maxLeft - height[left];
                left++;
            }else{
                ans += maxRight - height[right];
                right--;
            }
        }

        return ans;
    }
};