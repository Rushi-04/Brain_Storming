// class Solution 
// {
//     public:

//         vector<vector<int>> answer = {};
//         vector<int> currentSeq = {};

//         void recursion(int target, vector<int> &candidates, int start)
//         {
//             if(target == 0)
//             {
//                 answer.push_back(currentSeq);
//                 return;
//             }

//             for(int i = start;i<candidates.size();i++)
//             {
//                 if(target>=candidates[i])
//                 {
//                     currentSeq.push_back(candidates[i]);
//                     recursion(target - candidates[i], candidates, i);
//                     currentSeq.pop_back();
//                 }
//             }
//         }

//         vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
//         {
//             vector<int> num = {1,2,3,5};
//             int target = 5;
//             recursion(target, num, 0);

//         }
// };



class Solution {
    public:
        
        vector<vector<int>> answer = {};
        vector<int> currentSeq = {};
        void recursion(vector<int> &candidates, int index, int target)
        {   
            //base case
            if(target == 0)
            {
                answer.push_back(currentSeq);
                return;
            }

            for(int i = index;i<candidates.size();i++)
            {
                if (target >= candidates[i])
                {
                    currentSeq.push_back(candidates[i]);
                    recursion(candidates, i, target - candidates[i]);
                    currentSeq.pop_back();
                }
            }
            
            return answer;

        }

        vector<vector<int>> combinationSum(vector<int>& candidates, int target)
        {
            recursion(candidates, 0, target);
        }
};