class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0;
        int j=height.size()-1;
        int maxarea=0,newarea;
        while(i<j){
            newarea=(j-i)*min(height[i],height[j]);
            maxarea=max(newarea, maxarea);
            if (height[i]<height[j]){
                i++;
            }else if (height[i]>height[j]){
                j--;
            }else{
                i++;
            }
        }
        return maxarea;
    }
};
