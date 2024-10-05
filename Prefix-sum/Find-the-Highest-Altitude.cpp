class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxal=0, sum=0;
        for(int i=0;i<gain.size();i++){
            sum+=gain[i];
            maxal=max(sum, maxal);
        }
        return maxal;
    }
};
