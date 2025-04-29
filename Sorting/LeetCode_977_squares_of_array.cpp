//BRUTEFORCE 
class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
            int n = nums.size();
            for(int i = 0; i < n;i++)
            {
                nums[i] = nums[i] * nums[i];
            }

            //BUBBLE SORT
            for(int i =0;i<n-1;i++)
            {
                for(int j = 0;j<n-1-i;j++)
                {
                    if(nums[j] > nums[j+1])
                    {   
                        //SWAP
                        int temp = nums[j];
                        nums[j] = nums[j+1];
                        nums[j+1] = temp;
                    }
                    
                }
            }

            

        }
    };

//OPTIMIZED

class Solution {
    public:
        vector<int> sortedSquares(vector<int>& nums) {
            int n = nums.size();
            int i =0;
            int j = n-1;
            int index = n - 1;
            vector<int> answer(n, 0);
            

            while(i<=j)
            {
                if(abs(nums[i]) > abs(nums[j]))
                {
                    nums[index] = nums[i] * nums[i];
                    i++;
                }else{
                    nums[index] = nums[j] * nums[j];
                    j--;
                }
                index--;
            }
            class Solution {
                public:
                    vector<int> sortedSquares(vector<int>& nums) {
                        int n = nums.size();
                        int i =0;
                        int j = n-1;
                        int index = n - 1;
                        vector<int> answer(n, 0);
                        
            
                        while(i<=j)
                        {
                            if(abs(nums[i] > abs(nums[j])))
                            {
                                nums[index] = nums[i] * nums[i];
                                i++;
                            }else{
                                nums[index] = nums[j] * nums[j];
                                j--;
                            }
                            index--;
                        }
            
                        return answer;
                    }
                };

            return answer;
        }
    };