class Solution {
public:
    int maximumProduct(vector<int>& nums) {
      sort(nums.begin(),nums.end());
    //   if(nums[nums.size()-1]<0){
    //     return nums[0]*nums[1]*nums[2];
    //   }else 
      if (nums[1]>0 || nums[nums.size()-1]<0){
        return nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3];
      }else{
        nums[0]*=-1;
        nums[1]*=-1;
        return max(nums[0]*nums[1]*nums[nums.size()-1], nums[nums.size()-1]*nums[nums.size()-2]*nums[nums.size()-3]);
      }
    }
};