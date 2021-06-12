#include<bits/stdc++.h>
using namespace std;


void side(int arr[], int n)
{
	sort(arr, arr+n);
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
    side(arr,n);

}
