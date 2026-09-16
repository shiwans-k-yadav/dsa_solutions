class Solution {
public:
    bool isPalindrome(string s) {
        string check = "";
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                check+=s[i];
            }
        }

        int i=0,j=check.length()-1;
        while(i<j){
            if(tolower(check[i])!=tolower(check[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};
