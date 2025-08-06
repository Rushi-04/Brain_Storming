class Solution {
  public:
    // arr : given array
    // k : find kth smallest element and return using this function
 
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
    
    int quickSelect(int start, int end, vector<int> &a, int kth)
    {
        if(start>=end)
        {
            return a[start];
        }
        
        int pivotIndex = partition(start, end, a);
        
        if(pivotIndex == kth)
        {
            return a[pivotIndex];
        }else if(pivotIndex > kth)
        {
            return quickSelect(start, pivotIndex-1, a, kth);
        }
        else{
            return quickSelect(pivotIndex+1, end, a, kth);
        }
    }
    
    int kthSmallest(vector<int> &arr, int k) {
        
        int n = arr.size();
        return quickSelect(0, n-1, arr, k-1);
        
    }
};