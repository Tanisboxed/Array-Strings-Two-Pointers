class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<k;i++){
            sum+=nums[i];
        }
        double maxavg=sum/(double)k;
        int start=0;
        int end=k;
        while(end < nums.size()){
            sum-=nums[start];
            sum+=nums[end];
            start++;
            end++;
            maxavg=max(sum/(double)k, maxavg);
        }
        return maxavg;
    }
};
