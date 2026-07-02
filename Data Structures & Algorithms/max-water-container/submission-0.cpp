class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();

        int max_area=0;
        //Optimal approach uses the two pointer approach;

        int left = 0;
        int right = n-1;

        while(left < right){
            int width = right - left;
            int height = min(heights[left], heights[right]);
            int area = width*height;
            max_area = max(max_area, area);

            if(heights[left] < heights[right]) left ++;
            else right --;
        }

        return max_area;
        
    }
};
