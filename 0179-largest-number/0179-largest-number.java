class Solution {
    public String largestNumber(int[] nums) {
        String[] numStr=new String[nums.length];
        for(int i=0;i<nums.length;i++) numStr[i]=Integer.toString(nums[i]);
        Arrays.sort(numStr,new Comparator<String>(){
            public int compare(String a,String b){
                String s1=a+b;
                String s2=b+a;
                return s2.compareTo(s1);
            }
        });
        if(numStr[0].equals("0")) return "0";
        String ans="";
        for(String s:numStr) ans+=s;
        return ans;
    }
}