public class compare {
    public static void main(String[] args) {
        int a = 5;
        int b = 9;
        int c = 11;

        if (a>=b && a>=c){
            System.out.println(a);
        }
        else if (b >= a && b>=c){
            System.out.println(b);
        }
        else {
            System.out.println(c);
        }
    }
}
