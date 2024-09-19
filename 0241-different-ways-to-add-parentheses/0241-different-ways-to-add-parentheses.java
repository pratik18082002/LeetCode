class Solution {
    public List<Integer> diffWaysToCompute(String expression) {
        List<Integer> ans=new ArrayList<>();
        for(int i=0;i<expression.length();i++){
            char c=expression.charAt(i);
            if(c=='+'||c=='-'||c=='*'){
                List<Integer> s1=diffWaysToCompute(expression.substring(0,i));
                List<Integer> s2=diffWaysToCompute(expression.substring(i+1));
                for(int j:s1){
                    for(int k:s2){
                        if(c=='+') ans.add(j+k);
                        else if(c=='-') ans.add(j-k);
                        else ans.add(j*k);
                    }
                }
            }
        }
        if(ans.isEmpty()) ans.add(Integer.parseInt(expression));
        return ans;
    }
}