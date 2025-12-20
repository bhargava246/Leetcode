class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    
    if(nums.size()==0){return 0;}
    int maxLength = 0; 
    int length = 1;
    sort(nums.begin(),nums.end());
    int Felement = nums[0];
    for(int i=1;i<nums.size();i++){
        if(nums[i] == Felement+1){
            length++;
            cout<<length<<" "<<nums[i]<<" ";
            Felement = nums[i];
        }
        else if(nums[i]==Felement){

        }
        else{
            maxLength = max(maxLength,length);
            Felement = nums[i];
            length = 1;
        }
    }
    maxLength = max(maxLength,length);

    return maxLength;
    }
};