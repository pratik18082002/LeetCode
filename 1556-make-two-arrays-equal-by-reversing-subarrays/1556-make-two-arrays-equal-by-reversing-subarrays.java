class Solution {
    public boolean canBeEqual(int[] target, int[] arr) {
        int n=target.length;
        for(int i=0;i<n;i++){
            int j=0;
            while(j<n){
                if(target[i]==arr[j]){
                    arr[j]=-1;
                    break;
                }
                j++;
            }
            if(j==n) return false;
        }
        return true;
    }
}