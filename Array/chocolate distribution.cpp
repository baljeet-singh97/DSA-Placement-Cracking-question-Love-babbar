    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
    //code
    sort(a.begin(),a.end());
    int diff = INT_MAX;
    for(int i=0; i<=(n-m); i++)
    {
        int d = a[i+m-1]-a[i];
        if(d<diff)
        {
            diff = d;
        }
    }
    return diff;
    
    
    }   
};

https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1#
