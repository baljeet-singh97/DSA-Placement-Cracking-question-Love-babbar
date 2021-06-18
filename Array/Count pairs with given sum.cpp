class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) 
    {
        // code here
        
        map<int,int>m;
        for(int i=0; i<n; i++)
        {
            m[arr[i]]++;
        }
        int twice_count=0;
        for (int i = 0; i < n; i++) 
        {
            twice_count += m[k - arr[i]];
 
        if (k - arr[i] == arr[i])
            twice_count--;
    }
 
    // return the half of twice_count
    return twice_count / 2;
        
    }
};

https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1
