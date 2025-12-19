class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       
       int i = 0;
       int j=0;
       int sum = nums[0];
       int maxSum = nums[0];
       for(int k=1;k<nums.size();k++){
        if(nums[k]>sum+nums[k]){sum = nums[k];i=k;cout<<sum; maxSum = max(sum,maxSum);}
        else if(sum+nums[k]>0){
            
            j=k;      
            sum = sum+nums[k];
            maxSum = max(sum,maxSum);
            cout<<sum<<endl;
        }else{
            sum = 0;
            i=k+1;
        }
       }
    //    if(maxSum==0){
    //     return nums[0];
    //    }
    return maxSum;
    }
};