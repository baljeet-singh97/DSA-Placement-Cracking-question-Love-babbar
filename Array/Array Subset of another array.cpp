string isSubset(int a1[], int a2[], int n, int m) 
{
    unordered_set<int>sett;
    for(int i=0; i<n; i++)
    {
        sett.insert(a1[i]);
    }
    string ans = "Yes";
    for(int i=0; i<m; i++)
    {
        if(sett.find(a2[i]) == sett.end())
        {
            ans= "No";
        }
        
    }
    return ans;
    
    
}


https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1#
