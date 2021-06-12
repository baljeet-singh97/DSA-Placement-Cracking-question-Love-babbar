public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int FinalMax = INT_MIN;
        int NewMax = 0;
        for(int i=0; i<n; i++)
        {
            NewMax = NewMax+arr[i];
            if(FinalMax<NewMax)
            {
                FinalMax = NewMax;
            }
            if(NewMax<0)
            {
                NewMax = 0;
            }
        }
        return FinalMax;
        
        
        
    }
};

https://practice.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1
