class Solution {
public:
    int maxVowels(string s, int k) {
        int count=0,start=0, end=k;
        char c;
        for (int i=0;i<k;i++){
            c=s.at(i);
            count += isVowel(c);
        }
        int maxcount=count;
        while(end < s.length()){
            count -=isVowel(s.at(start++));
            count+= isVowel(s.at(end++));
            maxcount=max(maxcount, count);
        }
        return maxcount;
    }
    int isVowel(char c){
        return (c=='a'|| c=='e'|| c=='i'|| c=='o' || c=='u') ? 1 : 0;
    }
};
