class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) 
	{
	    // code here
	    long long maxi = arr[0];
	    long long  mini = arr[0];
	    long long maxprod = arr[0];
	    for(int i=1; i<n; i++)
	    {
	        if(arr[i]<0)
	        {
	            swap(maxi,mini);
	        }
	        maxi=max(1ll*arr[i],maxi*arr[i]);
	        mini=min(1ll*arr[i],mini*arr[i]);
	        
	        maxprod = max(maxprod,maxi);
	    }
	    return maxprod;
	    
	    
	    
	}
};


https://practice.geeksforgeeks.org/problems/maximum-product-subarray3604/1
