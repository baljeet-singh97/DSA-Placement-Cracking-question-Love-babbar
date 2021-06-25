

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) 
    {
        // code here
        
        int temp[N*N];
        int k=0;
        for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                temp[k++] = Mat[i][j];
            }
        }
        sort(temp,temp+k);
        k=0;
        for(int i= 0;i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                Mat[i][j]=temp[k++];
            }
        }
        return Mat;
        
        
    }
};

https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1#
