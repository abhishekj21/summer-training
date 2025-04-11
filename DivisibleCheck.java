import java.util.Scanner;

public class DivisibleCheck {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Taking input
        System.out.print("Enter a number: ");
        int number = scanner.nextInt();

        // Check if divisible by both 2 and 3
        if (number % 2 == 0 && number % 3 == 0) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }

        scanner.close();
    }
}
