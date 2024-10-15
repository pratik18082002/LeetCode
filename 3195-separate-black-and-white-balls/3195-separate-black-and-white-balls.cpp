class Solution {
public:
    long long minimumSteps(string s) {
        int i=0,j=0,times=0;
        long long ans=0;
        for(i=0;i<s.size();i++) if(s[i]=='1') break;
        for(j=s.size()-1;j>=0;j--) if(s[j]=='0') break;
        for(int k=i;k<=j;k++){
            if(s[k]=='1') times++;
            else ans+=times;
        }
        return ans;
    }
};