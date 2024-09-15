class Solution {
public:
    string reverseWords(string s) {
        string result="";
        int end= s.length();
        for (int i=end-1;i>=0;i--){
            if (s[i]==' '){
                if (i+1<end){
                result+=s.substr(i+1,end-(i+1)) + " ";
                }
                end=i;
         }
        }
        if(end>0){
            result+=s.substr(0,end);
        }
        if(!result.empty() && result.back()==' '){
            result.pop_back();
        }
        return result;
    }
};
