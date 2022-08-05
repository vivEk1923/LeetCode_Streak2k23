class Solution {
public:
  /*  int solution(vector<int>& nums, int target)
    {
        if(target < 0)
            return 0;
        if(target == 0)
            return 1;
        
        int answer = 0;
        for(int i = 0; i < nums.size(); i++)
        {   answer +=solution(nums, target - nums[i]);
        }
        return answer;
    }
    
    */
    
    
    int solutionMem(vector<int>& nums, int target,vector<int>& dp)
    {
        if(target < 0)
            return 0;
        if(target == 0)
            return 1;
        if(dp[target] != -1)
        {
            return dp[target];
        }
        int answer = 0;
        for(int i = 0; i < nums.size(); i++)
        {   answer +=solutionMem(nums, target - nums[i], dp);
        }
        dp[target] = answer;
        return dp[target] ;
    }
    
    
    
    int combinationSum4(vector<int>& nums, int target) {
       // return solution(nums,target);
        vector<int> dp(target + 1, -1);
        return solutionMem(nums, target, dp);
    }
};