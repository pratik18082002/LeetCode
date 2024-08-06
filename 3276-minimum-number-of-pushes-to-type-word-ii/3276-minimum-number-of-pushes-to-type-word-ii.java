class Solution {
    public int minimumPushes(String word) {
        int n=word.length(),ans=0,push=8;
        int[] freq=new int[26];
        for(int i=0;i<n;i++) freq[word.charAt(i)-'a']++;
        Arrays.sort(freq);
        for(int i=25;i>=0;i--){
            ans+=freq[i]*(push/8);
            push++;
        }
        return ans;
    }
}