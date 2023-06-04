import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a 3-digit number: ");
        int num = sc.nextInt();

        int firstDigit = num / 100;
        int thirdDigit = num % 10;
        int sum = firstDigit + thirdDigit;

        if (sum > 7) {
            sum += 15;
        } else {
            sum += 20;
        }

        System.out.println("Result: " + sum);
        if(sum%2==0){
            System.out.println("even ");
        }
        else{
            System.out.println("odd");
        }
    }

}
