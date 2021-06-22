class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      int ans = 0, count=0;
      
      sort(arr, arr+N);
      
      vector<int>v;
      v.push_back(arr[0]);
      
      for(int i=1; i<N; i++)
      {
          if(arr[i]!=arr[i-1])
          {
              v.push_back(arr[i]);
          }
      }
      for(int i=0; i<v.size(); i++)
      {
          if(i>0 && v[i]==v[i-1]+1)
          {
              count++;
          }
          else
          {
              count=1;
          }
           ans=max(ans,count);
      }
     
      return ans;
    }
    
};

https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1
