class Solution {
public:
    string numberToWord(int unitsPlace, int tensPlace, int hundredsPlace){
        string ans="";
        vector<string> digits={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
        vector<string> teen={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
        vector<string> tens={"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
        if(hundredsPlace!=0){
            ans=digits[hundredsPlace]+" Hundred";
            if(tensPlace!=0){
                if(tensPlace==1) ans+=" "+teen[unitsPlace];
                else{
                    ans+=" "+tens[tensPlace];
                    if(unitsPlace!=0) ans+=" "+digits[unitsPlace];
                }
            }
            else if(unitsPlace!=0) ans+=" "+digits[unitsPlace];
        }
        else{
            if(tensPlace!=0){
                if(tensPlace==1) ans+=teen[unitsPlace];
                else{
                    ans+=tens[tensPlace];
                    if(unitsPlace!=0) ans+=" "+digits[unitsPlace];
                }
            }
            else if(unitsPlace!=0) ans+=digits[unitsPlace];
        }
        return ans;
    }

    string numberToWords(int num) {
        if(num==0) return "Zero";
        string ans="";
        vector<string> measurement={"Thousand","Million","Billion"};
        for(int i=0;i<4&&num!=0;i++){
            int unitsPlace=num%10,tensPlace=(num%100)/10,hundredsPlace=(num%1000)/100;
            num/=1000;
            cout<<unitsPlace<<" "<<tensPlace<<" "<<hundredsPlace;
            string temp=numberToWord(unitsPlace,tensPlace,hundredsPlace);
            if(temp=="") continue;
            if(i==0) ans=temp;
            else{
                if(ans=="") ans=temp+" "+measurement[i-1];
                else ans=temp+" "+measurement[i-1]+" "+ans;
            }
        }
        return ans;
    }
};