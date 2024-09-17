class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        int r=0,i=0;
        while(i<n){
            char current=chars[i];
            int count=0;
            while(i<n && chars[i]==current){
                count++;
                i++;
            }
            chars[r] = current;
            r++;
            if(count>1){
                string counter=to_string(count);
                for(char &ch: counter){
                    chars[r]=ch;
                    r++;
                }
            }
        }
        return r;
    }
};
