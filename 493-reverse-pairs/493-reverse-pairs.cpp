typedef long long ll;
class Solution {
public:
    
    int merge(int a[],int b[],int size1,int c[],int size2)
    {
        int i=0;
        int j=0;
        int count=0;
        for(i=0;i<size1;i++)
        {
           
            while(j<size2&&b[i]>2LL*c[j])
                j++;
            count+=j;
        }
        
        i=0;
        j=0;
        int k=0;
        while(i<size1&&j<size2)
        {
            if(b[i]<=c[j])
                a[k++]=b[i++];
            else if(b[i]>c[j])
            {
                
                a[k++]=c[j++];
            }
            
        }
        
        while(i<size1)
        {
            a[k++]=b[i++];
        }
        
        while(j<size2)
        {
            a[k++]=c[j++];
        }
        
        
        
        
        
        return count;
        
    }
    
    int mergesort(int a[],int n)
    {
        if(n<=1)
            return 0;
        
        int mid=n/2;
        int size1=mid;
        int size2=n-mid;
        
        int b[size1];
        int c[size2];
        
        for(int i=0;i<size1;i++)
            b[i]=a[i];
        
        int k=0;
        for(int i=size1;i<n;i++)
            c[k++]=a[i];
        
        int c1=mergesort(b,size1);
        int c2=mergesort(c,size2);
        int c3=merge(a,b,size1,c,size2);
        
        int count=c1+c2+c3;
        return count;
        
    }
    
    
    int reversePairs(vector<int>& nums) 
    {
        
        int n=nums.size();
        int a[n];
        for(int i=0;i<n;i++)
        {
            a[i]=nums[i];
        }
        
        return mergesort(a,n);
        
    }
};