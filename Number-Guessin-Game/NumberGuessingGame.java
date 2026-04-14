import java.util.*;

public class NumberGuessingGame {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Random rand = new Random();

        int maxNumber = 0;
        int attempts = 0;

        System.out.println("🎮 Welcome to Guess the Number Game!");
        System.out.println("Choose Difficulty Level:");
        System.out.println("1. Easy (1–50, 10 attempts)");
        System.out.println("2. Medium (1–100, 7 attempts)");
        System.out.println("3. Hard (1–200, 5 attempts)");

        int choice = sc.nextInt();

        switch(choice) {
            case 1:
                maxNumber = 50;
                attempts = 10;
                break;
            case 2:
                maxNumber = 100;
                attempts = 7;
                break;
            case 3:
                maxNumber = 200;
                attempts = 5;
                break;
            default:
                System.out.println("Invalid choice! Defaulting to Easy.");
                maxNumber = 50;
                attempts = 10;
        }

        int numberToGuess = rand.nextInt(maxNumber) + 1;
        int guess;
        boolean hasWon = false;

        System.out.println("\nI have chosen a number between 1 and " + maxNumber);

        for(int i = 1; i <= attempts; i++) {
            System.out.print("Attempt " + i + "/" + attempts + ": Enter your guess: ");
            guess = sc.nextInt();

            if(guess == numberToGuess) {
                System.out.println(" Congratulations! You guessed it right!");
                hasWon = true;
                break;
            } else if(guess < numberToGuess) {
                System.out.println(" Too low!");
            } else {
                System.out.println(" Too high!");
            }
        }

        if(!hasWon) {
            System.out.println(" You've used all attempts!");
            System.out.println("The correct number was: " + numberToGuess);
        }

        sc.close();
    }
}