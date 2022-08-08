class Solution {
public:
    
    void help(vector<int>&a,int start,int end)
    {
        int i=start;
        int j=end;
        while(i<j)
        {
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            i++;
            j--;
        }
        
    }
    
    void rotate(vector<int>& a, int k) {
        
        
        
        int n=a.size();
        if(n==0)
            return;
        if(n<k&&n!=0)
        {
            k=k%n;
        }
        
        
        help(a,0,n-1);
        help(a,0,k-1);
        help(a,k,n-1);
        
            
        
        
        
    }
};