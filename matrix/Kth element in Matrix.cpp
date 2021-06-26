


int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  priority_queue<int>maxheap;
  for(int i=0; i<n; i++)
  {
      for(int j=0; j<n; j++)
      {
          maxheap.push(mat[i][j]);
          if(maxhe.size()>k)
          {
              maxheap.pop();
          }
      }
  }

  return maxheap.top();
}

https://practice.geeksforgeeks.org/problems/kth-element-in-matrix/1#

#2nd solution

int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  //Your code here
  multiset<int>ms;
  for(int i=0; i<n; i++)
  {
      for(int j=0; j<n; j++)
      ms.insert(mat[i][j]);
  }
  auto it = ms.begin();
  advance(it,k-1);
  return *it;
  
}
