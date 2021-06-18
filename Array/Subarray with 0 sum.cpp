bool subArrayExists(int arr[], int n)
    {
        //Your code here
        
        int sum=0;
        unordered_map<int,int>m;
        for(int i=0; i<n; i++)
        {
            sum+=arr[i];
            {
                if(sum==0 || m.find(sum)!=m.end() || arr[i]==0)
                {
                    return true;
                }
                else
                m[sum]=1;
            }
        }
        return false;
        
        
        
    }
};

https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1
