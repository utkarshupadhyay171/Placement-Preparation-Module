class Solution {
public:
    int compareVersion(string version1, string version2) 
    {
        int i=0,j=0,l1=version1.size(),l2=version2.size();
        
        while(i<l1||j<l2)
        {
            int n=0,m=0;
            while(i<l1&&version1[i]!='.')
            {
                n=n*10+(version1[i]-'0');
                i++;
            }
            while(j<l2&&version2[j]!='.')
            {
                m=m*10+(version2[j]-'0');
                j++;
            }
            if(n>m)
                return 1;
            else if(n<m)
                return -1;
            i++;
            j++;
            
            
        }
        return 0;
        
    }
};