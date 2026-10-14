class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
     sort(strs.begin(),strs.end());
     string result="";
     int n=strs.size();
     string temp1=strs[0];
     string temp2=strs[n-1];
     for(int i=0;i<temp1.size();i++){
        if(temp1[i]==temp2[i]){
            result+=temp1[i];
        }
        else{
            break;
        }
     }
     return result;
    }
};