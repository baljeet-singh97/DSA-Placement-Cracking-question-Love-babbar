class Solution 
{
    public:

    void multiply(int x, vector<int>&multi)
    {
        int carry=0;
        for(auto i=multi.begin(); i!=multi.end(); i++)
        {
            int product = (*i)*x+carry;
            
            *i=product%10;
            carry=product/10;
        }
        while(carry)
        {
            multi.push_back(carry%10);
            carry=carry/10;
        }
    }
    
    vector<int> factorial(int N)
    {
        // code here
        vector<int>result;
        vector<int>v;
        result.push_back(1);
        
        for(int x=2; x<=N; x++)
        {
            multiply(x,result);
        }
       reverse(result.begin(), result.end());
       for(auto it = result.begin(); it!=result.end(); it++)
       {
           v.push_back(*it);
       }
        return v;
    }
   
   
};

https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1#
