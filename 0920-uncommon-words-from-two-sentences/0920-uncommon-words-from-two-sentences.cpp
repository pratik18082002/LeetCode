class Solution {
public:
    // vector<string> sentenceToWords(string s){
    //     vector<string> words;
    //     string temp;
    //     for(int i=0;i<s.size();i++){
    //         if(s[i]==' '){
    //             words.push_back(temp);
    //             temp="";
    //         }
    //         else temp+=s[i];
    //     }
    //     words.push_back(temp);
    //     return words;
    // }
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> ans;
        map<string,int> mp;
        s1+=" "+s2;
        string temp="";
        for(char c:s1){
            if(c==' '){
                mp[temp]++;
                temp="";
            }
            else temp+=c;
        }
        mp[temp]++;
        for(auto i:mp) if(i.second==1) ans.push_back(i.first);
        return ans;

        // vector<string> ans;
        // map<string,int> mp;
        // vector<string> wordsOfS1(sentenceToWords(s1));
        // vector<string> wordsOfS2(sentenceToWords(s2));
        // for(string word:wordsOfS1) {
        //     if(find(wordsOfS2.begin(),wordsOfS2.end(),word)==wordsOfS2.end()){
        //         ans.push_back(word);
        //     }
        // }
        // for(string word:wordsOfS2) {
        //     if(find(wordsOfS1.begin(),wordsOfS1.end(),word)==wordsOfS1.end()){
        //         ans.push_back(word);
        //     }
        // }
        // for(auto w:ans) mp[w]++;
        // ans.clear();
        // for(auto w:mp) if(w.second==1) ans.push_back(w.first);
        // return ans;
    }
};