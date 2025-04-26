#include<bits/stdc++.h>
using namespace std;

//vector
/*
int main()
{
	vector<int> arr = {}; //empty vector
	
	arr.push_back(10);
	arr.push_back(20);
	arr.push_back(30);
	cout<<"Size of array: "<< arr.size() <<endl;
	
	
	//printing array elements
	for(int i = 0;i<arr.size();i++){
		cout<<"Element "<<i+1<<" in array:"<<arr[i]<<endl;
	}
	
	arr.pop_back();
	cout<<arr[(arr.size()-1)]<<endl;
	
	return 0;
}
*/

int main()
{
	vector< vector<int> > arr = {};
	
	//INSERTING ELEMENTS
	arr.push_back({1,2,3,4});
	arr.push_back({1,2});
	arr.push_back({1,2,3});
	
	//PRINTING ELEMENTS
	for (int i= 0; i<arr.size();i++){
		for (int j=0; j<arr[i].size();j++){
			cout<<arr[i][j];
		}
		cout<<" "<<endl;
	}
	
	return 0;
	

}