class Solution {
public:
    int findComplement(int num) {
        int ans=0;
        long long power=1;
        while(num){
            if((num&1)==0) ans+=power;
            else cout<<"no\n";
            num/=2;
            cout<<num<<endl;
            power*=2;
        }
        return ans;
    }
};