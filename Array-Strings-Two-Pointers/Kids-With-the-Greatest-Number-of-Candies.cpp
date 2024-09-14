class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool> result(n);
        
        for(int i=0;i<n;i++){
            int x= *max_element(candies.begin(), candies.end());
            
            if (candies[i] + extraCandies >= x){
                result[i]=true;
            }else{
                result[i]=false;
            }
        }
        return result;
    }
};
