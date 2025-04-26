class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
		int count = 0;
		int answer = -1;
		
		for(int i=0;i<nums.size();i++)
		{	
			if (count == 0)
			{
				count = 1;
				answer = nums[i];
			}else
			{
				if (nums[i] == answer)
				{
					count ++;
				}else
				{
					count --;
				}
			}
			
		}
		return answer;
    }
};