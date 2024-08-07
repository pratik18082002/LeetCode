class Solution {
public:
    string numberToWords(int num) {
        if(num==0) return "Zero";
        vector<string> measurement={"Thousand","Million","Billion"};
        vector<string> digits={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
        vector<string> tPlace1={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
        vector<string> tPlace={"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
        string n=to_string(num),ans="";
        for(int i=(3-(n.size()%3))%3;i>0;i--) n="0"+n;
        int count=0;
        for(int i=n.size()-3;i>=0;i-=3){
            string temp="";
            if(i>=0){
                if(n[i]!='0'){
                    temp+=digits[n[i]-'0']+" Hundred";
                    if(n[i+1]!='0'){
                        if(n[i+1]=='1') temp+=" "+tPlace1[n[i+2]-'0'];
                        else{
                            temp+=" "+tPlace[n[i+1]-'0'];
                            if(n[i+2]!='0') temp+=" "+digits[n[i+2]-'0'];
                        } 
                    }
                    else{
                        if(n[i+2]!='0') temp+=" "+digits[n[i+2]-'0'];
                    }
                }
                else{
                    if(n[i+1]!='0'){
                        // cout<<"*******";
                        if(n[i+1]=='1'){
                            temp+=tPlace1[n[i+2]-'0'];
                            // cout<<"*******";
                        }
                        else{
                            temp+=tPlace[n[i+1]-'0'];
                            if(n[i+2]!='0') temp+=" "+digits[n[i+2]-'0'];
                        }
                    }
                    else{
                        if(n[i+2]!='0') temp+=digits[n[i+2]-'0'];
                        // else temp+="Zero";
                    }
                }
            }
            if(n.size()==i+3){
                if(temp.size()==0){
                    continue;
                }
                ans+=temp;
            }
            else{
                if(temp.size()==0){
                    count++;
                    continue;
                }
                if(ans.size()==0) ans=temp+" "+measurement[count];
                else ans=temp+" "+measurement[count]+" "+ans;
                count++;
            }
        }
        return ans;
    }
};