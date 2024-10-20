public class Main {
    public static void main(String[] args) {
        // 여기에 코드를 작성해주세요.
        int a=5;
        int b=6;
        int c=7;
        int temp;

        temp=a;
        a=c;
        c=b;
        b=temp;

        System.out.printf("%d\n%d\n%d\n",a,b,c);
    }
}