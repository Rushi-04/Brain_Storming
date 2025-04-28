#include<bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> arr = {1, 2, 4, 6, 7, 9, -1};
    int target = 10;

    //Code to insert element in a sorted array

    //1.Loop to check where to insert number
    int index = -1;
    int n = arr.size();
    for(int i=0;i<n-1;i++)
    {
        if(arr[i] > target)
        {
            index = i;
            break;
            
        }
    }

    if(index == -1)
    {
        arr[n-1] = target;
        cout << "The new array is: " << endl;
        for(int i = 0;i<arr.size();i++)
        {
            cout << arr[i] << " ";
        }
        return 0;
    }
    
    //MOVEMENT OF ELEMENTS (INSERTION SORT)
    int j = arr.size() - 2;

    while(j>=index)
    {
        arr[j+1] = arr[j];
        j--;
    }

    arr[index] = target;

    cout << "The new array is: " << endl;
    for(int i = 0;i<arr.size();i++)
    {
        cout << arr[i] << " ";
    }
    

    return 0;
}