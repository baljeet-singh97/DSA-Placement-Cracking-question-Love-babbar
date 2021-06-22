class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        sort(A,A+n);
        
        for(int i=0; i<n-2; i++)
        {
            int l=i+1;
            int r=n-1;
            while(l<r)
            {
                if(A[i]+A[l]+A[r]==X)
                {
                    return true;
                }
                if(A[i]+A[l]+A[r]<X)
                {
                    l++;
                }
                else
                {
                    r--;
                }
            }
        }
        return false;
    }
};

https://practice.geeksforgeeks.org/problems/triplet-sum-in-array-1587115621/1#
