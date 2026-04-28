import java.util.*;
import java.io.*;

class Solution{
    public static void main(String []argh){
        Scanner in = new Scanner(System.in);
        int t=in.nextInt();
        for(int i=0;i<t;i++){
            int a = in.nextInt();
            int b = in.nextInt();
            int n = in.nextInt();
            
            int currentSum = a;
            for(int j=0; j<n; j++){
                // Use the formula: currentSum + (2^j * b)
                // (1 << j) is a fast way to calculate 2^j
                currentSum += (Math.pow(2, j) * b);
                System.out.print(currentSum + " ");
            }
            System.out.println();
        }
        in.close();
    }
}
