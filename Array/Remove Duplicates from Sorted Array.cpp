class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
		//					i
		//input       -->  [1,1,2,2,2,3,3,4,4,4,4]
		//					j
		//calculation -->  [1,2,3,4,2,3,3,4,4,4,4] || first 4 
		//output   	  -->  4
		
		//we will use 2 pointer approach here
		int i = 0;
		int j = 0;
		int index = 0;
		
		while(i<arr.size())
		{
			while(j<arr.size() && arr[i]==arr[j])
			{
				j++;
			}
			arr[index] = arr[i];
			index++;
			i = j;
			
		}
		
		return index;
		
    }
};	