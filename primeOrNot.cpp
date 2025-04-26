#include<bits/stdc++.h>
using namespace std;



bool isPrime(int n)
{	

	if(n==1)
	{
		return false;
	}
	for(int i=2;i<=(int)sqrt(n);i++)
	{
		if(n%i==0)
		{
			return false;
		}
		
	}
	return true;
}

int main()
{
	cout<<"Enter a number: ";
	int n;
	cin>>n;
	
	for(int i =1;i<n;i++) //O (n)
	{
		if(isPrime(i) == true )  // O(sqrt(n))
		{
			cout<<i<<" ";
		}
			
	}
	
	
	return 0;
	
}