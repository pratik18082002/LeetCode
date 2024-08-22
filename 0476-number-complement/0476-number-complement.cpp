class Solution {
public:
    int findComplement(int num) {
        int ans=0;
        long long power=1;
        while(num){
            if((num&1)==0) ans+=power;
            cout<<num<<endl;
            num=num>>1;
            power=power<<1;
        }
        return ans;
    }
};