class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string a=strs[0];
        string b=strs[n-1];
        string result="";
        
        if(n==0) 
            return "";
        
        for(int i=0;i<a.size();i++){
            if(a[i]==b[i]){
                result+=a[i];
            }
            else{
                break;
            }
        }
        return result;
    }
};