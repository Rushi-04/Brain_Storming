#include<bits/stdc++.h>

using namespace std;


int sumArray(int arr[], int l, int r){
	int sum = 0;
	for(int i=l;i<=r;i++)
	{
		sum+=arr[i];
	}
	return sum;
}

int main()
{
	int arr[] = {1,2,3,4,5};
	int l = 1;
	int r = 4;
	
	cout<<"Sum of array elements from index "<<l<<" to "<<r<<" is: "<<sumArray(arr, l, r)<<endl;
	
	
	return 0;
}