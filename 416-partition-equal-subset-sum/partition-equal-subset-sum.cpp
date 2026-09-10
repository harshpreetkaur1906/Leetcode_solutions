class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int totalsum = 0;
        for(int i=0; i<nums.size(); i++){
        totalsum+= nums[i];
        }
        if(totalsum % 2 != 0){
            return false;
        }
        int target = totalsum/2;
        vector<bool> dp(target+1, false);
        dp[0]=true;
        for(int i=0;i<nums.size();i++){
            for(int j=target;j>=nums[i];j--){
            if(dp[j-nums[i]]){
                dp[j]=true;
            }
        

        }
        
    }
return dp[target];
        
    }
};