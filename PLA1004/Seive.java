import java.util.Scanner;

public class Seive {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter n:");
        int n = sc.nextInt();
        sc.close();
        if (n<=1){
            System.out.println("No Prime Numbers below it");
        }
        else{
            boolean[] isPrime = new boolean[n];
            for (int i = 0; i < n; i++) {
                isPrime[i] = true;
            }
            for (int i = 2; i <= Math.sqrt(n); i++) {
                if (isPrime[i]){
                    int m = (n/i);
                    for (int j = 2; j <= m; i++){
                        isPrime[j*i] = false;
                    }
                }
            }
            for (int i = 0; i <= n; i++) {
                if(isPrime[i]){
                    System.out.println(i);
                }
            }
        }
    }
}
