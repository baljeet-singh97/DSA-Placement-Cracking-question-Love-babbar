class Solution {
public:
    void nextPermutation(vector<int>& nums)
    {
       int k=0;
       int l=0;
       int n=nums.size();
        for(int i=nums.size()-1; i>0; i--)
        {
            if(nums[i-1]<nums[i])
            {
                k=i;
                break;
            }
        }
        
        if(k==0)
        {
            sort(nums.begin(),nums.end()); return;
        }
        
        for(int j=nums.size()-1; j>0; j--)
        {
            if(nums[k-1]<nums[j])
            {
                l=j;
                break;
            }
        }
       
        swap(nums[k-1],nums[l]);
        reverse(nums.begin()+k,nums.end());
        
        
    }
};

https://leetcode.com/problems/next-permutation/
