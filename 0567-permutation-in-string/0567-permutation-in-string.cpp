class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;
        vector<int> frqS1(26,0),frqS2(26,0);
        for(int i=0;i<s1.size();i++) frqS1[s1[i]-'a']++;
        for(int i=0;i<s1.size();i++) frqS2[s2[i]-'a']++;
        for(int i=s1.size();i<s2.size();i++){
            if(frqS1==frqS2) return true;
            frqS2[s2[i]-'a']++;
            frqS2[s2[i-s1.size()]-'a']--;
        }
        return frqS1==frqS2;
    }
};