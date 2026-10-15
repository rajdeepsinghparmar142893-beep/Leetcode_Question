class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int Max=0;

        for(char c:s){
            if(c=='('){
                count++;
                Max=max(Max,count);
            }
            else if(c==')'){
                count--;
            }
        }
        return Max;
    }
};