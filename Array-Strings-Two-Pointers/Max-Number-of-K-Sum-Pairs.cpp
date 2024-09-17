#include <algorithm>
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int op=0;
        int n=nums.size();
        int i=0, j=n-1;
        sort(nums.begin(), nums.end());
        while(i<j){
            if (nums[i]+nums[j]==k){
                op++;
                i++;
                j--;
            }else if(nums[i]+nums[j]>k){
                j--;
            }else{
                i++;
            }
        }
        return op;
    }
};
