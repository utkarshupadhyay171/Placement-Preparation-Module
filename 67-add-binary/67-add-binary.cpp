class Solution {
public:
    string addBinary(string a, string b)
    {
        char c='0';
        string ans="";
        int n=a.size()-1;
        int m=b.size()-1;
        int i=n,j=m;
        while(i>=0&&j>=0)
        {
            if(a[i]=='1'&&b[j]=='1'&&c=='1')
            {
                ans+='1';
                c='1';
            }
            else if(a[i]=='1'&&b[j]=='1'&&c=='0')
            {
                ans+='0';
                c='1';
            }
            else if((a[i]=='1'||b[j]=='1')&&c=='1')
            {
                ans+='0';
                c='1';
            }
            else if((a[i]=='1'||b[j]=='1')&&c=='0')
            {
                ans+='1';
                c='0';
            }
            else if((a[i]=='0'&&b[j]=='0')&&c=='1')
            {
                ans+='1';
                c='0';
            }
            else if((a[i]=='0'||b[j]=='0')&&c=='0')
            {
                ans+='0';
                c='0';
            }
            i--;j--;
  
        }
        
        while(i>=0)
        {
            if(a[i]=='1'&&c=='1')
            {
                ans+='0';
                c='1';
            }
            else if(a[i]=='1'&&c=='0')
            {
                ans+='1';
                c='0';
            }
            else if(a[i]=='0'&&c=='1')
            {
                ans+='1';
                c='0';
            }
            else if(a[i]=='0'&&c=='0')
            {
                ans+='0';
                c='0';
            }
            
            
            i--;
        }
        while(j>=0)
        {
            if(b[j]=='1'&&c=='1')
            {
                ans+='0';
                c='1';
            }
            else if(b[j]=='1'&&c=='0')
            {
                ans+='1';
                c='0';
            }
            else if(b[j]=='0'&&c=='1')
            {
                ans+='1';
                c='0';
            }
            else if(b[j]=='0'&&c=='0')
            {
                ans+='0';
                c='0';
            }
            
            
            j--;
        }
        
        if(c=='1')
            ans+=c;
        int x=ans.size();
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};