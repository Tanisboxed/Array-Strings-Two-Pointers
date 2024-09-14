class Solution {
public:
    
    bool vowel(char c){
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
    string reverseVowels(string s) {
        int n=s.size();
        int i=0;
        int j=n-1;
        while(i<j){
            if (!vowel(s[i])){
                i++;
                continue;
            }
            if (!vowel(s[j])){
                j--;
                continue;
            }
            char temp=s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
        return s;
    }
};
