class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int r =mat.size();
        int c = mat[0].size();
        int sum=0;
        int start=0,end=0;
        //primary done here
        while(end<r){
            sum+=mat[start][end];
            start++;
            end++;
        } 
        start=0,end=c-1;
        while(start<end){
            sum+=mat[start][end];
            sum+=mat[end][start];
            start++;
            end--;
        }
        return sum;
    }
};
