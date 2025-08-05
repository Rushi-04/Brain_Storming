#include<bits/stdc++.h>
using namespace std;

void merge(int start, int mid, int end, vector<int> &a)
{   
    int i = start;
    int j = mid+1;
    vector<int> temp = {};
    
    while(i<=mid && j<=end)
    {
        if(a[i] < a[j])
        {
            temp.push_back(a[i]);
            i++;
        }else{
            temp.push_back(a[j]);
            j++;
        }
    }
    
    while(i<=mid)
    {
        temp.push_back(a[i]);
        i++;
    }
    
    while(j<=end)
    {
        temp.push_back(a[j]);
        j++;
    }
    
    int k = start;
    
    for(int i =0; i< temp.size(); i++)
    {
        a[k] = temp[i];
        k++;
    }
}

void mergeSort(int start, int end, vector<int> &a)
{   
    if(start==end)
    {
        return;
    }
    
    int mid = (start+end)/2;
    
    mergeSort(start, mid, a);
    mergeSort(mid+1, end, a);
    
    merge(start, mid, end, a);
}

int main()
{   
    vector<int> arr = {8, 4, 7, 3, 10};
    
    int n = arr.size();
    mergeSort(0, n-1, arr);
    
    for(int i : arr)
        cout<<i<<" ";
        
    return 0;
}