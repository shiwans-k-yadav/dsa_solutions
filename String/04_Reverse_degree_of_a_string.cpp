class Solution {
public:
    int reverseDegree(string s) {
        int ans=0;
        for(int i=0;i<s.length();i++){
            int n = s[i];
            int degree = 26-((n-71)-26);
            ans+=((i+1)*degree);
        }
        return ans;
    }
};
