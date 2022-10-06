class Solution {
public:
    vector<int>nextGreaterElement(vector<int>&a,vector<int>&b)     {
        int n=a.size();
        int m=b.size();
        unordered_map<int,int>map;
        stack<int>st;
        for(int i=m-1;i>=0;i--)
        {
            while(!st.empty()&&st.top()<b[i])
                st.pop();
            if(!st.empty())
            {
                map[b[i]]=st.top();
            }
            else
                map[b[i]]=-1;
            st.push(b[i]);
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            ans.push_back(map[a[i]]);
        }
        return ans;
    }
};