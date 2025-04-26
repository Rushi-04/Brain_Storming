#include <bits/stdc++.h> 
using namespace std;

int sum(int n)
{
	//base case
	if ( n==1 )
	{
		return 1;
	}

	//logic
	int answer = n + sum(n -1);

	return answer;
}

int main() {
	// write your code here
	int num = 100;
	cout << sum(num) ;
	return 0;
}