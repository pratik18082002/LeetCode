class Solution {
    // static ArrayList<String> sentenceToWords(String s){
    //     ArrayList<String> words=new ArrayList<>();
    //     String temp="";
    //     for(int i=0;i<s.length();i++){
    //         if(s.charAt(i)==' '){
    //             words.add(temp);
    //             temp="";
    //         }
    //         else temp+=s.charAt(i);
    //     }
    //     words.add(temp);
    //     return words;
    // }
    public String[] uncommonFromSentences(String s1, String s2) {
        Map<String,Integer> mp=new HashMap<>();
        ArrayList<String> ans=new ArrayList<>();
        s1+=" "+s2;
        String temp="";
        for(int i=0;i<s1.length();i++){
            if(s1.charAt(i)==' '){
                if(mp.containsKey(temp)) mp.put(temp,mp.get(temp)+1);
                else mp.put(temp,1);
                temp="";
            }
            else temp+=s1.charAt(i);
        }
        if(mp.containsKey(temp)) mp.put(temp,mp.get(temp)+1);
        else mp.put(temp,1); 
        for(Map.Entry<String,Integer> e:mp.entrySet()) if(e.getValue()==1) ans.add(e.getKey());
        String[] a=new String[ans.size()];
        a=ans.toArray(a);
        return a;

        // Map<String,Integer> mp=new HashMap<>();
        // ArrayList<String> ans=new ArrayList<>();
        // ArrayList<String> wordsToS1=new ArrayList<>(sentenceToWords(s1));
        // ArrayList<String> wordsToS2=new ArrayList<>(sentenceToWords(s2));
        // for(String w:wordsToS1) if(wordsToS2.contains(w)==false) ans.add(w);
        // for(String w:wordsToS2) if(wordsToS1.contains(w)==false) ans.add(w);
        // for(String w:ans){
        //     if(mp.containsKey(w)) mp.put(w,mp.get(w)+1);
        //     else mp.put(w,1);
        // }
        // ans.clear();
        // for(Map.Entry<String,Integer> e:mp.entrySet()) if(e.getValue()==1) ans.add(e.getKey());
        // String[] a=new String[ans.size()];
        // a=ans.toArray(a);
        // return a;
    }
}