class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int j = 0;
        int k = 0;
        for(int i=0;i<nums.size();i++){
            j = j^nums[i];
       }
       for(int i = 0;i<nums.size()+1;i++){
            k = k^i;
       }
       return j^k;
    }
};