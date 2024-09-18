class Solution {
public:
    // bool cmp(string a,string b,int i,int j) {
    //     if(a[i]>b[j]) return true;
    //     else if(a[i]<b[j]) return false;
    //     else{
    //         if(i+1==a.size()&&j+1==b.size()) return true;
    //         else if(i+1==a.size()&&j+1!=b.size()) return cmp(a,b,i,j+1);
    //         else if(i+1!=a.size()&&j+1==b.size()) return cmp(a,b,i+1,j);
    //         else return cmp(a,b,i+1,j+1);
    //     }
    // }
    bool static compare(string s1,string s2){ 
        return s1+s2<s2+s1;
    }
    string largestNumber(vector<int>& nums) {
        string ans="";
        vector<string> n;
        for(int i:nums) n.push_back(to_string(i));
        sort(n.begin(),n.end(),compare);
        for(int i=n.size()-1;i>=0;i--){
            cout<<n[i]<<endl;
            ans+=n[i];
        }
        return ans;
    }
};