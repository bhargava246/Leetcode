class Solution {
public:
    int findMaxLength(vector<int>& nums) {
         int count = 0;
         int length = 0;
         unordered_map<int,int> map;
         for(int i=0;i<nums.size();i++){
            if(nums[i]==1){count++;}
            else{count--;}
            if(count == 0){length = i+1;}
            if(map.find(count)!=map.end()){
                length =  max(i - map[count],length);
            }else{
            map[count] = i;}
         }
         return length;
    }
};