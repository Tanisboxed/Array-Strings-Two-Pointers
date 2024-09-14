class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count=0;
        int m=flowerbed.size();
        for(int i=0;i<m;i++){
            if (flowerbed[i]==0){
                int leftadj =(i==0 || flowerbed[i-1]==0);
                int rightadj =(i==m-1|| flowerbed[i+1]==0);
                if (leftadj && rightadj){
                    flowerbed[i]=1;
                    count++;
                }
            }
        }
        return count>=n;
    }
};
