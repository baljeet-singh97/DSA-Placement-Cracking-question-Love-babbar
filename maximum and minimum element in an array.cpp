#include<bits/stdc++.h>
using namespace std;

void minmax(int arr[], int n)
{
	int max=arr[0];
	int min=arr[0];
	for(int i=1; i<n; i++)
	{
		if(arr[i]<min)
		{
			min=arr[i];
		}
		else if(arr[i]>max)
		{
			max=arr[i];
		}
		
	}
	cout<<min<<" "<<max;
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
        minmax(arr,n);

}
