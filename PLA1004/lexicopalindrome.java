


public class lexicopalindrome {
    public static String smallestPalindrome(String st) {

        char[] arr = st.toCharArray();

        int[] freq = new int[26];

        for(char x : arr){
            freq[x-'a']++;
        }
        int oddcnt = 0;
        char oddchar = ' ';

        for(int i = 0; i < freq.length; i++){
            if(freq[i]%2 != 0){
                oddcnt++;
                oddchar = (char) (i +'a');
            }
            if(oddcnt > 1){
                System.out.println("Not Possible");
                return "Not Possible";
            }
        }

        String ans = "";

        for(int i = 0; i < freq.length; i++){
            if(((char) i + 'a') == oddchar){
                continue;
            }
            ans += ((char) (i + 'a'))*freq[i]/2;

        }
        ans += oddchar + ans;

        return ans;

    }

    public static void main(String[] args) {
        String st = "acbba";

        System.out.println(smallestPalindrome(st));
    }
}
