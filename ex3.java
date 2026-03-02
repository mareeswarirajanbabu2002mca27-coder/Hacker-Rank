import java.util.Scanner;

public class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.println("================================");
        
        for (int i = 0; i < 3; i++) {
            String s1 = sc.next();
            int x = sc.nextInt();
            
            // %-15s : String (s1), left-justified (-), 15 characters wide
            // %03d  : Integer (x), 3 digits wide, padded with leading zeros (0)
            // %n    : Platform-independent newline
            System.out.printf("%-15s%03d%n", s1, x);
        }
        
        System.out.println("================================");
        sc.close();
    }
}

