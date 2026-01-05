class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxE = INT_MIN;
        int putE = -1;
        for(int i=arr.size()-1;i>=0;i--){
            maxE = max(maxE,arr[i]);
            arr[i] = putE;
            putE = maxE;                    
        }   
        return arr;
    }
};