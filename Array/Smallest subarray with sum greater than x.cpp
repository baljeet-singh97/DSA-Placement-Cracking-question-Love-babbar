 int start =0; 
        int end = 0;
        int ans = n+1;
        int sum =0;
        while(end<n)
        {
            while(sum<=x && end<n)
            {
                sum+=arr[end];
                end++;
            }
            while(sum>x && start<n)
            {
                if(end-start < ans)
                {
                    ans = end-start;
                }
                sum-=arr[start];
                start++;
            }
        }
        return ans;

https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1
