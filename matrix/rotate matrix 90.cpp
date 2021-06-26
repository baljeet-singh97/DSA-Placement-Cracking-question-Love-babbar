class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int top = 0;
        int left = 0;
        int right = matrix[0].size()-1;
        int bottom = matrix.size()-1;
        
        vector<int>v;
        
        while(left<=right)
        {
            for(int i=bottom; i>=top; i--)
            {
                v.push_back(matrix[i][left]);
            }
            left++;
        }
        top = 0;
        while(top<=bottom)
        {
            for(int i=0; i<matrix.size(); i++)
            {
                matrix[top][i] = v[i];
            }
            v.erase(v.begin(), v.begin()+matrix.size());
            top++;
            
        }
    }
};

https://leetcode.com/problems/rotate-image/
