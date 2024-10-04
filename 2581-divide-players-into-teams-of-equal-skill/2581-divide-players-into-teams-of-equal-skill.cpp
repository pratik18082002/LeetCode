class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        int n=skill.size(),sum=skill[0]+skill[n-1];
        long long ans=skill[0]*skill[n-1];
        for(int i=1;i<n/2;i++){
            if(sum==skill[i]+skill[n-1-i]) ans+=skill[i]*skill[n-1-i];
            else return -1;
        }
        return ans;
    }
};