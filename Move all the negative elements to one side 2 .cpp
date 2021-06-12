#include<bits/stdc++.h>
using namespace std;


void rearrange(int arr[], int n)
{
	int i = 0;
    for (int j = 0; j < n; j++) 
	{
		if (arr[j] < 0) 
		{
            if (j != i)
            {
                swap(arr[i], arr[j]);
            }
			i++;
        }
    }
}

void printarr(int arr[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    rearrange(arr,n);
    printarr(arr,n);
    return 0;
    

}
