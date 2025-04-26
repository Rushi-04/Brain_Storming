class Solution {
    public:
        vector<vector<int> answer> = {};
        vector<int> currentSeq = {}; 

        void recursion(int index, vector<int> &nums)
        {
            //Base Case
            if(index>=nums.size())
            {
                answer.push_back(currentSeq);
                return;
            }

            //Recursive Cases
            //Option1 -- add element to seq and call recursion for next index
            currentSeq.push_back(nums[index]);
            recursion(index+1, nums);
            currentSeq.pop_back();

            //Option2
            recursion(index+1, nums);
        }

        vector<vector<int>> subsets(vector<int>& nums) 
        {
            recursion(0, nums);
            return answer;
        }
    };