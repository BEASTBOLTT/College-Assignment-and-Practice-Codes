public class MO {
    void Sum(int a, int b){
        int c = a + b;
        System.out.println(c);
    }
    void Sum(int a, float b){
        float c = a + b;
        System.out.println(c);
    }
    void Sum(int a, int b, int c){
        int d = a + b + c;
        System.out.println(d);
    }
    public static void main(String[] args) {
        MO o1 = new MO();
        o1.Sum(1, 28);
        o1.Sum(43, 27.3f);
        o1.Sum(22,23,24);
    }
}
