#include<bits/stdc++.h>
using namespace std;

void moveZerotoLast(int arr[] , int n)
{
	int i =0;
	for(int j =0; j<n;j++)
	{
		if(arr[j]!=0)
		{
			swap(arr[i],arr[j]);
			i++;
		}
	}
	
	for(int i =0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[8]={0,0,0,1,2,7,8,0};
	moveZerotoLast(arr,8);
	
}
