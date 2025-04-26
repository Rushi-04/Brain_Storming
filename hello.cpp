/*#include <iostream>

using namespace std;


int main(){
	cout << "Hello Rushi,\nYou have written the code in Notepad++" << endl;
	return 0;
	
}
*/

//Concept -- Variables 

/*
int main(){
	//int
	int num = 21;
	//char 
	char grade = 'A';
	//float 
	float marks = 25.5f;
	//double
	double price = 2323.435;
	//boolean
	bool is_Safe = true;

	cout <<  "All Datatypes :- ";
	cout << num <<endl;
	return 0;
}*/


/*
#include<iostream>
using namespace std;

int main(){
	
	cout<<"------------------------- Pattern Printer -------------------------"<<endl;
	cout<<"Enter a number: ";
	int n;
	cin>>n;
	
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=n;j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}

	return 0;
}


#include<iostream>
using namespace std;

int main(){
	
	cout<<"------------------------- Pattern Printer -------------------------"<<endl;
	cout<<"Enter a number: ";
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++)
	{
		
		for(int n=0;n<=i-1;n++)
		{
			cout<<" ";
		}
		for(int j=0;j<n;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0; 	
}


#include<iostream>
using namespace std;

int main(){
	
	cout<<"------------------------- Pattern Printer -------------------------"<<endl;
	for(int i=0;i<10;i+=2)
	{
		cout<<"* ";
	}
	
	
	return 0;
	
}
*/


#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int maxOf2(int a,int b)
{
	if (a>b) 
		return a;
	else 
		return b;
}

int main()
{
	int c = maxOf2(5,4);
	cout<<"The Max. is"<<c<<endl;
	
	return 0;
}

