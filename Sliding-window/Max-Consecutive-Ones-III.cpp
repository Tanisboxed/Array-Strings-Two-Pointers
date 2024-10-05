// sliding window O(N)

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int start=0, end=0, zero=0, maxlen=0, len=0;
        while (end<nums.size()){
            if (nums[end]==0) zero++;
            while (zero>k){
                if (nums[start]==0) zero--;
                start++;
            }
            if(zero<=k){
                len=end-start+1;
                maxlen=max(len,maxlen);
            }
            end++;
        }
        return maxlen;
    }
};


// sliding window 
// To remove the internal loop: 
// we strictly maintain  a length of maxlen if the zeros exceed k value, start and end keeps on updating by 1 
// until it gets updated to less than or equal to k, once it reaches <= then we update maxlen afterwards. 
class Solution {
public:
  int longestOnes(vector<int>& nums, int k) {
          int start=0, end=0, zero=0, maxlen=0;
          while (end<nums.size()){
              if (nums[end]==0) zero++;
              if(zero>k){     //while to if 
                  if (nums[start]==0) zero--;
                  start++;    //Basically not letting it expand and keeping it upto maxlen regardless
              }
              if(zero<=k){
                  len=end-start+1;
                  maxlen=max(len,maxlen);
              }
              end++;
          }
          return maxlen;
      }
};
