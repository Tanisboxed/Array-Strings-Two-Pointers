
#sliding window
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int start=0, end=0, maxlen=0, count=0;
        for(start=0;start<nums.size();start++){
            if (nums[start]==0) count++;
            while(count>1){
                if(nums[end]==0) count--;
                end++;
            }
            maxlen=max(maxlen, start-end);
        }
        return maxlen;
    }
    
};


## Inital attempt:
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int curr=0, prev=0, maxlen=0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]==1){
                curr++;
            }
            else{
                maxlen=max(maxlen, curr+prev);
                prev=curr;
                curr=0;
            }
        }
        maxlen=max(maxlen,curr+prev);
        return (maxlen==nums.size()) ? maxlen-1 : maxlen;
    }
};
