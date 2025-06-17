class Solution {
public:
    int myAtoi(string s) {
      long long no = 0;
      bool negative = false;
      bool noa = true;
      int i = 0;
      while(s[i]==' '){i++;}
      if(s[i]=='-' || s[i] == '+'){if(s[i]=='-'){negative= true;}
      i++;}
      while(i<s.length() && isdigit(s[i])){
        
         no = no*10+(s[i]-'0');
         if(no>INT_MAX){if(negative)return INT_MIN;
         return INT_MAX;}
        
        i++;
      }
      if(negative){return -no;}
      return no;
    }
};