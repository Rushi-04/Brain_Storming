// #include <bits/stdc++.h> 
// using namespace std;

// // Find all occurences of element in an array
// void find_occurence(vector<int> arr, int target, int index)
// {
// 	//base case
// 	if (index > arr.size())
// 	{
// 		return;
// 	}

// 	//logic
// 	if (arr[index] == target)
// 	{
// 		cout << index<< " ";
// 	}

// 	//recursive case
// 	find_occurence(arr, target, index+1);

// }


// int main() {
	
// 	vector<int> arr = {1,2,3,4,3,5,6};
// 	int target = 3;

// 	find_occurence(arr, target, 0);


// 	return 0;
// }










#include<bits/stdc++.h>
using namespace std;


void find_occurence(vector<int> arr,int target ,int index)
{
    //base case
    if(index > arr.size())
    {
        return;
    }

    //logic
    if( arr[index] == target )
    {
        cout << index<< " ";
    }

    //recursive case
    find_occurence(arr, target, index+1);
}

int main()
{

    vector<int> arr = {4,4,4,4,4,4,5,4,4,4,4,4,4};
    int target = 4;

    find_occurence(arr, target, 0);

    return 0;
}
