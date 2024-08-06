class Solution {
public:
    int minimumPushes(string word) {
        int ans=0;
        vector<int> v(26,0);
        for(int i=0;i<word.size();i++) v[word[i]-'a']++;
        sort(v.begin(),v.end(),greater<int>());
        for(int i=0;i<26;i++) ans+=v[i]*((i+8)/8);
        return ans;
    }
};