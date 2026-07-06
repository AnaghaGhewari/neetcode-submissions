class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        int left= 0;
        int right = n-1;

        int leftMax=0;
        int rightMax=0;

        int total_water=0;

        while(left < right){
            if(height[left]<=height[right]){
                //process left first
                if(height[left] >= leftMax){
                    leftMax = height[left];
                }
                else{
                    total_water += leftMax - height[left];
                }

                left ++;

            }
                //process right

            else{

                if(height[right] >= rightMax){
                    rightMax = height[right];
                }
                else{
                    total_water += rightMax - height[right];
                }
                right --;
        }
           
    }
    return total_water;
    }
};
