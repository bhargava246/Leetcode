class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map <char,int> freq;
        queue<pair<char,int>> ch;
        for(int i=0;i<s.length();i++){
            freq[s[i]]++;
            ch.push({s[i],i});
            while(!ch.empty() && freq[ch.front().first]>1){
                ch.pop();
            }
        }
        if(ch.empty()){
            return -1;
        }
        return ch.front().second;
    }
};