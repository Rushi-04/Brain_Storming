// Printing numbers form 1 to n with the hepl of recursion

//Increasing Recursion

#include <bits/stdc++.h> 
using namespace std;
//recursion -->  return recursion (datatype) return, printing recursion (void and print)

// Q. print numbers from 1 to n

// Increasing recursion 
void recur(int i, int n)// i -- start, n -- till this number
{
	//base case
	if (i > n)
	{
		return;
	}
	//recursive case
	recur(i+1, n); 

	//logic
	cout << i << " ";

}

int main() {
	
	recur(1, 5);

	return 0;
}



//Decreasing Recursion

#include <bits/stdc++.h> 
using namespace std;

//Decreasing  recursion
//printing recursion

void recur(int n)
{	
	//base case
	if (n<1)
	{
		return;
	}	

	//recursive case
	recur(n-1);
	//logic
	cout << n <<" ";


}

int main() {
	
	recur(5);


	return 0;
}