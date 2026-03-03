import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        // Read three integers from stdin
        int a = scan.nextInt();
        int b = scan.nextInt();
        int c = scan.nextInt();
        
        // Print each integer on a new line
        System.out.println(a);
        System.out.println(b);
        System.out.println(c);
        
        scan.close();
    }
}
