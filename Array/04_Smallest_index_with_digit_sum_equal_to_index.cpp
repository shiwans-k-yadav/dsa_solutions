class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int sum=0,a=nums[i];
            while(a!=0){
                int r = a%10;
                sum+=r;
                a=a/10;
            }
            if(sum==i){
                return i;
            }
        }
        return -1;
    }
};
