class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target)
    {
       
        int right = matrix[0].size()-1;
        int top = 0;
        int bottom = matrix.size()-1;
        
        unordered_set<int>set;
        
        while(top<=bottom)
        {
            for(int i=0; i<=right; i++)
            {
                set.insert(matrix[top][i]);
            }
            top++;
        }
        if(set.find(target)!=set.end())
        {
            return true;
        }
        else
            return false;
        
    }
};

https://leetcode.com/problems/search-a-2d-matrix/
