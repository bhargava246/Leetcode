class Solution {
public:
    int missingNumber(vector<int>& nums) {
      int XOR1=0,XOR2 = 0;
      for(int i=0;i<nums.size();i++){
        XOR1 = XOR1^nums[i];
      }
      for(int i=0;i<nums.size()+1;i++){
        XOR2 = XOR2^i;
      }
      return XOR1^XOR2;
    }
};