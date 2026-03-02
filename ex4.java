import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        
        // 1. Read the integer
        int i = scan.nextInt();
        
        // 2. Read the double
        double d = scan.nextDouble();
        
        /* 
           3. Clear the buffer!
           The previous nextDouble() left a newline character. 
           We must consume it before reading the actual string.
        */
        scan.nextLine(); 
        
        // 4. Read the full string
        String s = scan.nextLine();
        
        scan.close();

        // Output results in the specified order
        System.out.println("String: " + s);
        System.out.println("Double: " + d);
        System.out.println("Int: " + i);
    }
}
