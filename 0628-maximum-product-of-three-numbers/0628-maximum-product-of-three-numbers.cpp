class Solution {
public:
    int maximumProduct(vector<int>& nums) {
      int max1 = -12312;
     int max2 = -12312;
     int max3 = -312121;
     int min1 = 19999;
     int min2 = 1999;
     int value = 0;
     for(int i=0;i<nums.size();i++){
       value = nums[i];
       if(value>max1){
        max3 = max2;
        max2=max1;
        max1 = value;
       }else if(max2<value){
        max3 = max2;
        max2 = value;
       }else if(max3<value){
        max3 = value;
       }

        if(min1>value){
        min2 = min1;
        min1 = value;
       }else if(min2>value){
        min2 = value;
       }
     }   
     cout<<max1<<" "<<max2<<" "<<max3<<" "<<min1<<" "<<min2;
    return max(max1*max2*max3,min1*min2*max1);
    }
};