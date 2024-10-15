class Solution {
public:
    long long minimumSteps(string s) {
        int firstOne=0,firstZero=0,count=0;
        long long ans=0;
        for(firstOne=0;firstOne<s.size();firstOne++) if(s[firstOne]=='1') break;
        for(firstZero=s.size()-1;firstZero>=0;firstZero--) if(s[firstZero]=='0') break;
        for(int k=firstOne;k<=firstZero;k++){
            if(s[k]=='1') count++;
            else ans+=count;
        }
        return ans;
    }
};