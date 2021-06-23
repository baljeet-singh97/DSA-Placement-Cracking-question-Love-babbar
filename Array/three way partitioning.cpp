   void threeWayPartition(vector<int>& array,int a, int b)
    {
        // code here 
        int n =array.size();
        int low=0,high=n-1,mid=0;
        while(mid<=high)
        {
            if(array[mid]<a)
            {
                swap(array[low],array[mid]);
                low++;
                mid++;
            }
            else if(array[mid]>b)
            {
                swap(array[mid],array[high]);
                high--;
            }
            else
            {
                mid++;
            }
        
       }
    }
};

https://practice.geeksforgeeks.org/problems/three-way-partitioning/1#
