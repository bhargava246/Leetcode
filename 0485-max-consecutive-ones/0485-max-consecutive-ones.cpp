class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int streak = 0; int P_Streak = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1){
                P_Streak++;
                streak = max(streak,P_Streak);
            }else{P_Streak = 0;}
        }
        
        return streak;
    }
};