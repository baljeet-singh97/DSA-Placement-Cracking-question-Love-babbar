class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) 
	{
	    // code here
	    int right = arr[0].size()-1;
	    int bottom = arr.size()-1;
	    int left = 0;
	    
	    while(left<=right)
	    {
	        for(int i=0; i<=bottom; i++)
	        {
	            if(arr[i][left]==1)
	            {
	               return i;
	            }
	        }
	        left++;
	    }
	    return -1;
	   
	}

};

https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1#
