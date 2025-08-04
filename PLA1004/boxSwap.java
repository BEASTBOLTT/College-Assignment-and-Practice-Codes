public class boxSwap{
    public static void main(String[] args){
        
        int[] arr = {1,2,3,4,5,6,7};
        int k = 3;
        k = k%(arr.length); //35 1marks, 2 coding, 1 derivation, 
        reverse(arr, 0, arr.length-1);
        reverse(arr, 0, k-1);
        reverse(arr, k, arr.length-1);

        for (int i = 0; i < arr.length; i++) {
            System.err.println(arr[i]);
        }
    }

    public static void reverse(int[] arr, int start, int end) {


        while (start < end) {
            // Swap elements at start and end
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;

            // Move pointers towards the center
            start++;
            end--;
        }
    }
}