class Solution {
    public long dividePlayers(int[] skill) {
        Arrays.sort(skill);
        int n=skill.length,sum=skill[0]+skill[n-1];
        long ans=skill[0]*skill[n-1];
        for(int i=1;i<n/2;i++){
            if(sum==skill[i]+skill[n-1-i]) ans+=(skill[i]*skill[n-1-i]);
            else return -1;
        }
        return ans;
    }
}