class Solution {
    public int countSeniors(String[] details) {
        int n=details.length,ans=0;
        for(int i=0;i<n;i++){
            if((details[i].charAt(11)-'0')*10+(details[i].charAt(12)-'0')>60){
                ans++;
            }
        }
        return ans;
    }
}