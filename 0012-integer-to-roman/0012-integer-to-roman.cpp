class Solution {
public:
    string intToRoman(int num) 
    {
        int a[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string b[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string c="";
        for(int i=0;i<13;i++)
        {
            while(num>=a[i])
            {
                c+=b[i];
                num-=a[i];
            }
        }
        return c;
        
    }
};