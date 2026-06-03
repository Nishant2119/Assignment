class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1;
        int maxarea=0;
        int area =0;
        while(l<r)
        {
            area = (min(height[l],height[r])) * (r-l);
            maxarea = max(area,maxarea);
            if(height[l]<=height[r])
            {
                l++;
            }
            else 
            {
                r--;
            }
        }
        return maxarea;
    }
};