class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0, j = height.size() - 1;
        int max = 0;
        int area;
        while (i < j) {
            area = min(height[i], height[j]) * (j - i);
            if (area > max) 
                max = area;
            if (height[i] < height[j])
                i++;
            else
                j--;
        }
        return max;
    }
};
