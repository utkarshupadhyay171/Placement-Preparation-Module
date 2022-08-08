class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) 
    {
        vector<long long>v;
        long long sum=0;
        if(finalSum%2==1)
            return v;
        for(long long i=2;i<=finalSum;i+=2)
        {
            sum+=i;
            v.push_back(i);
            if(sum==finalSum)
            {
                return v;
            }
            else if(sum>finalSum)
                break;

        }
        int x=sum-finalSum;
        int l=v.size()-1;
        x=v[l]-x;
        v.pop_back();
        v[l-1]=v[l-1]+x;
        return v;
    }
};