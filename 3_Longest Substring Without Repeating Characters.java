public class Solution {
    public int lengthOfLongestSubstring(String s) {
        if (s == null || s.length() == 0) {
            return 0;
        }
        if (s.length() == 1) {
            return 1;
        }
        int max = 0;
        int leftPoint = 0;
        HashSet<Character> set = new HashSet<>();
        for(int i=0; i<s.length(); i++){
            if(set.contains(s.charAt(i))){
                while(leftPoint<i && s.charAt(leftPoint)!=s.charAt(i)){
                    set.remove(s.charAt(leftPoint));
                    leftPoint++;
                }
                leftPoint++;
            }else{
                set.add(s.charAt(i));
                max = Math.max(max, i-leftPoint+1);
            }
        }
        return max;
    }
    // public int lengthOfLongestSubstring(String s) {
    // if (s == null || s.length() == 0) {
    //     return 0;
    // }
    //  if (s.length() == 1) {
    //     return 1;
    // }
    // int length = 0;
    // int totalCharacter = 0;
    // Set set=new HashSet();
    // HashMap<Character, Integer> map = new HashMap<>();
    // for(int i=0; i<s.length(); i++){
    //     if(!set.contains(s.charAt(i)))
    //         set.add(s.charAt(i));
    // }
    // totalCharacter = set.size();
    // if(totalCharacter==1) return totalCharacter;
    // else{
    //     int backCount = 0;
    //     int tempLength = 0;
    //     for(int i=0; i<s.length; i++){
    //         if(map.get(s.charAt(i))!=null){
    //             if(length == totalCharacter) return length;
    //             else{
    //                 map.clear();
    //                 if(length<tempLength) length = tempLength;
    //                 tempLength = 0;
    //                 i = backCount;
    //                 backCount++;
    //                 continue;
    //             }
    //         }
    
    //         map.put(s.charAt(i), i);
    //         tempLength++;
    //     }
    //     if(length<tempLength) length = tempLength;
    //     return length;
    // }
    // }
}
