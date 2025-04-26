class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int index = 0;

        
        while(i<nums.size())
        {	
			int frequency = 0;
            while(j<nums.size() && arr[i]==arr[j])
            {
                j++;
                frequency++;
            }
            

            if(frequency==1)
            {	
                nums[index] = nums[i];
                index++;
            }else{
                nums[index] = nums[i];
                index++;
                nums[index] = nums[i];
                index++;
            }
			i=j;

            
        }
		return index;
    }
};