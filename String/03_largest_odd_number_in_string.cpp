class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.length();
        for(int i=n-1;i>=0;i--){
            int en= num[i]-'0';
            if(en%2!=0){
                return num.substr(0,i+1);
            }
        }
        return "";
    }
};
