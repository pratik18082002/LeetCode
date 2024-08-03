class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        int n=target.size();
        for(int i=0;i<n;i++){
            int flag=0;
            for(int j=0;j<n;j++){
                if(target[i]==arr[j]){
                    flag=1;
                    arr[j]=-1;
                    break;
                }
            }
            if(flag==0) return false;
        }
        return true;
    }
};