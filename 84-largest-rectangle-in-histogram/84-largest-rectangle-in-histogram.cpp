class Solution {
public:
    int largestRectangleArea(vector<int>& heights) 
    {
        int n=heights.size();
        vector<int>left;
        vector<int>right;
        stack<int>st;
    
        for(int i=0;i<n;i++)
        {
            
            while(!st.empty() && heights[st.top()]>=heights[i])
                st.pop();
            
            if(st.empty())  left.push_back(0);
            
            else    left.push_back(st.top()+1);
            
            st.push(i);
            
        }
        while(!st.empty()) st.pop();
        for(int i=n-1;i>=0;i--)
        {
            
            while(!st.empty() && heights[st.top()]>=heights[i])
                st.pop();
            
            if(st.empty()) right.push_back(n-1);
            
            else    right.push_back(st.top()-1);
            
            st.push(i);
            
        }
        reverse(right.begin(),right.end());
        
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int area=heights[i]*(right[i]-left[i]+1);
            ans=max(ans,area);
        }
        return ans;
        
    }
};