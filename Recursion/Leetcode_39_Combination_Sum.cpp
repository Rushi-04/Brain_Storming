class Solution 
{
    public:

        vector<vector<int>> answer = {};
        vector<int> currentSeq = {};

        void recursion(int target, vector<int> &candidates, int start)
        {
            if(target == 0)
            {
                answer.push_back(currentSeq);
                return;
            }

            for(int i = start;i<num.size();i++)
            {
                if(target>=candidates[i])
                {
                    currentSeq.push_back(candidates[i]);
                    recursion(target - candidates[i], candidates, i);
                    currentSeq.pop_back();
                }
            }
        }

        vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
        {
            vector<int> num = {1,2,3,5};
            int target = 5;
            recursion(target, num, 0);

        }
};