class Solution{   
public:
    int median(vector<vector<int>> &matrix, int r, int c)
    {
        // code here
        int top = 0;
        int right = matrix[0].size()-1;
        int bottom = matrix.size()-1;
        
        vector<int>v;
        while(top<=bottom)
        {
            for(int i=0; i<=right; i++)
            {
                v.push_back(matrix[top][i]);
            }
            top++;
        }
        sort(v.begin(), v.end());
        int med = (v.size()-1)/2;
        return v[med];
        
        
        
        
    }
};

https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1#
