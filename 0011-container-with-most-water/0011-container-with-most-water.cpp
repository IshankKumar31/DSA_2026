class Solution {
public:
    int maxArea(vector<int>& height) {
        int start=0;
        int end=height.size()-1;
        long long maxA=INT_MIN;

        while(start<end){
            int heightL= height[start];
            int heightR= height[end];
            int h=min(heightL,heightR);
            int width=end-start;

            long long area= h*width;
            maxA=max(area,maxA);
            if(height[start] < height[end]){
                start++;
            } else {
                end--;
            }
        }
        return maxA;
    }
};