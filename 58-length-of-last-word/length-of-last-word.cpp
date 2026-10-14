class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        int count=0;
        while(i>=0 && s[i]==' '){
            i--;
        }
        while(i>=0 && s[i]!=' '){
            count++;
            i--;
        }
        return count;

        // for(int i=s.size();i>0;i--){
        //     if(s[i]==' '){
        //         return i;
        //     }
        }
};