#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {5,4,3,2,1};
    int n = arr.size();
    //BUBBLE SORT   --> T.C -- O(n^2), S.C -- O(1)
    //Best Case -- O(n)
    //Worst Case -- O(n^2)
    //Avg Case -- O(n^2)

    for(int i = 0; i<n-1 ; i++)
    {
        bool isSwap = false;
        for(int j = 0; j<n-1-i; j++  )
        {
            if(arr[j] > arr[j+1])
            {   
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSwap = true;
            }
        }
        if(isSwap==false)
        {
            break;
        }
    }

    //Printing array
    for(int i = 0;i<n;i++)
    {
        cout<< arr[i] << " ";   // 1 2 3 4 5
    }

    return 0;
}