class Solution {
  public:
        
    int merge(int start, int mid, int end, vector<int> &a)
    {
        int i = start;
        int j = mid+1;
        int count = 0;
        vector<int> temp = {};
        
        while(i<=mid && j<=end)
        {
            if(a[i] <= a[j])
            {
                temp.push_back(a[i]);
                i++;
            }else
            {
                temp.push_back(a[j]);
                count += (mid - i + 1);
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
        for(int i = 0; i < temp.size(); i++)
        {
            a[k] = temp[i];
            k++;
        }
        
        return count;
    }
    
    int mergeSort(int start, int end, vector<int> &a)
    {
        if(start == end)
        {
            return 0;
        }
        
        int mid = (start+end)/2;
        
        int leftInversions = mergeSort(start, mid, a);
        int rightInversions = mergeSort(mid+1, end, a);
        
        int mergedinversions = merge(start, mid, end, a);
        
        int answer = leftInversions + rightInversions + mergedinversions;
        
        return answer;
        
    }
    
    int inversionCount(vector<int> &arr) {
        
        int n = arr.size();
        return mergeSort(0, n-1, arr);
        
        
        
    }
};