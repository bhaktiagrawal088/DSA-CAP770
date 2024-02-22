// import java.util.Scanner;

// public class c {
//     public static void generatePattern(int n) {
//         char[][] pattern = new char[n][n];

//         // Fill the first half of the pattern
//         for (int i = 0; i < n / 2; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (j < n / 2 - i || j >= n / 2 + i) {
//                     pattern[i][j] = 'C';
//                 } else {
//                     pattern[i][j] = 'S';
//                 }
//             }
//         }

//         // Fill the second half of the pattern
//         for (int i = n / 2; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 if (j < i - n / 2 || j >= n - (i - n / 2)) {
//                     pattern[i][j] = 'S';
//                 } else {
//                     pattern[i][j] = 'K';
//                 }
//             }
//         }

//         // Print the pattern
//         for (int i = 0; i < n; i++) {
//             for (int j = 0; j < n; j++) {
//                 System.out.print(pattern[i][j]);
//             }
//             System.out.println();
//         }
//     }

//     public static void main(String[] args) {
//         Scanner scanner = new Scanner(System.in);
//         System.out.print("Enter the value of n (even, n>=6): ");
//         int n = scanner.nextInt();

//         if (n % 2 != 0 || n < 6) {
//             System.out.println("Invalid input! n should be even and n>=6.");
//             return;
//         }

//         generatePattern(n);
//     }
// }

import java.util.*;

class c {
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int b = s.nextInt();
        for (int i = a; i <= b; i++) {
            if (i % 2 == 0 && i % 3 != 0 && i % 5 != 0) {
                System.out.print(i + " ");
            }
        }
        System.out.println(" ");

    }
}
