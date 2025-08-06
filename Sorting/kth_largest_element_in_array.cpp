class Solution {
public:
// QuickSort

    int partition(int start, int end, vector<int> &a)
    {
        int pivotElement = a[end];
        int j = start;
        
        for(int i = start; i < end; i++)
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

    int quickSelect(int start, int end, vector<int> &a, int answerIndex)
    {   
        //Base Case
        if(start>=end)
        {
            return a[start];
        }
        
        int pivotIndex = partition(start, end, a);
        
        if(pivotIndex == answerIndex)
        {
            return a[pivotIndex];
        }
        else if(pivotIndex < answerIndex)
        {   
            //Right
            return quickSelect(pivotIndex+1, end, a, answerIndex);
        }
        else
        {
            //Left
            return quickSelect(start, pivotIndex-1, a, answerIndex);
        }
        
        // //Recursive Case
        // quickSort(start, pivotIndex-1,a, answerIndex);
        // quickSort(pivotIndex+1, end, a, answerIndex);
    }

    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        return quickSelect(0, n-1, nums, n-k);
    }
};