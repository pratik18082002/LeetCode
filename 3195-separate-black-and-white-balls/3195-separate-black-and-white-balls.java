class Solution {
    public long minimumSteps(String s) {
        int firstOne=0,firstZero=0,count=0;
        long ans=0;
        for(firstOne=0;firstOne<s.length();firstOne++) if(s.charAt(firstOne)=='1') break;
        for(firstZero=s.length()-1;firstZero>=0;firstZero--) if(s.charAt(firstZero)=='0') break;
        for(int k=firstOne;k<=firstZero;k++){
            if(s.charAt(k)=='1') count++;
            else ans+=count;
        }
        return ans;
    }
}