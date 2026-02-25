class Solution {
public:
     bool isVowel(char c) {
        return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
               c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
        }

    string reverseVowels(string s) {
        int f=0;
        int l = s.size()-1;
        bool isVowel1 = false;
        bool isVowel2 = false;
       
        while(f < l) {

            while(f < l && !isVowel(s[f])) {
                f++;
            }
            while(f < l && !isVowel(s[l])) {
                l--;
            }
            swap(s[f], s[l]);
            f++;
            l--;
        }
        return s;
    }
};