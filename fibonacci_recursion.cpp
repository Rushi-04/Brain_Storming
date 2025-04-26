#include <bits/stdc++.h> 
using namespace std;

//Fibonacci
// F(n) = F(n-1) + F(n-2)

int fibo(int n) //params
{
	//base case
	if (n==0 || n==1)
	{
		return n;
	}

	//recursive case
	int ans = fibo(n-1) + fibo(n-2);

	return ans;
}


int main() {
	
	cout<< fibo(8) <<" ";

	return 0;
}