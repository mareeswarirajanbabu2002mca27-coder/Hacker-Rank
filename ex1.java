import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String A = sc.next();
        sc.close();
        
        /* 
           Reverse the string using StringBuilder and 
           compare it to the original string.
        */
        String reversed = new StringBuilder(A).reverse().toString();
        
        if (A.equals(reversed)) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }
}

