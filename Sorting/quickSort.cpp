#include<bits/stdc++.h>
using namespace std;
    

// Quick Sort 

int partition(int start ,int end, vector<int> &a)
{
    int pivotElement = a[end];
    int j = start;
    
    for(int i = start; i <= end-1 ;i++)
    {
        if(a[i] < pivotElement)
        {
            swap(a[j], a[i]);
            j++;
        }
    }
    swap(a[j], a[end]);
    
    return j;
}

void quickSort(int start, int end, vector<int> &a)
{   
    //Base Case
    if(start >= end)
    {
        return;
    }
    
    int pivotIndex = partition(start, end, a);
    
    quickSort(0, pivotIndex-1, a);
    quickSort(pivotIndex+1,end, a);
}

int main()
{   
    vector<int> arr = {8, 4, 7, 3, 10};
    
    int n = arr.size();
    quickSort(0, n-1, arr);
    
    for(int i : arr)
        cout<<i<<" ";
        
    return 0;
}