public class Pattern2 {
    public static void main(String[] args) {
        for (int i = 1; i < 4; i++) {
            for (int j = 3-i; j > 0; j--) {
                System.out.print(" ");
            }
            for (int j =1; j <= i; j++) {
                System.out.print("*");
            }
            for (int j =0; j < i-1; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        for (int i = 1; i < 3; i++) {
            for (int j = 0; j < i; j++) {
                System.out.print(" ");
            }
            for (int j = 3-i; j > 0; j--) {
                System.out.print("*");
            }
            for(int j = 2-i; j > 0; j--) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
