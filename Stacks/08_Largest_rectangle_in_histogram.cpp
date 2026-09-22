class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        if(n==1){
            return heights[0];
        }

        vector<int> right(n);
        vector<int> left(n);
        stack<int> st;

        // creating right array
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>heights[i]){
                right[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            right[st.top()]=n;
            st.pop();
        }



        //creating left array
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && heights[st.top()]>heights[i]){
                left[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            left[st.top()]=-1;  //for left you must keep in mind it's -1 not n..
            st.pop();
        }
        


        // Now finding answer...
        int ans=0;
        for(int i=0;i<n;i++){
            int val = heights[i] * (right[i]-left[i] -1);
            if(val>ans){
                ans=val;
            }
        }
        return ans;
    }
};
