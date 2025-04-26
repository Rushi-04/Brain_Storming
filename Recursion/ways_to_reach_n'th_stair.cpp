#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:

        int countWays(int n)
        {
            if (n<=2)
            {
                return n;
            }

            int answer = countWays(n - 1) + countWays(n - 2);
            return answer;
        }
};


int main()
{
    // I want to call the function countWays
    //create an object of the class Solution
    Solution obj;
    int n = 5;
    int ans = obj.countWays(n);
    cout << ans << endl; // Output: 8
}