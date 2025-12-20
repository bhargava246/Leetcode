class Solution {
public:
    int lengthOfLastWord(string s) {
        int Llength = 0;
        int length = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == ' '){
              if(length!=0){
                Llength = length;
              }
            }
            if(isalpha(s[i])){
               Llength =  ++length;
            }else{
                // Llength = length;
                length = 0;
            }    
        }
        if(length!=0){
            Llength = length;
        }
        return Llength;
    }
};