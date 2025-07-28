class NoVowelException extends Exception {
    public NoVowelException(String message) {
        super(message);
    }
}

public class VowelChecker {
    public static void checkVowels(String input) throws NoVowelException {
        if (!input.matches(".*[AEIOUaeiou].*")) {
            throw new NoVowelException("The input string does not contain any vowels.");
        } else {
            System.out.println("The input string contains vowels.");
        }
    }

    public static void main(String[] args) {
        String testString = "Rhythm"; // Change this to test different cases
        
        try {
            checkVowels(testString);
        } catch (NoVowelException e) {
            System.out.println("Exception caught: " + e.getMessage());
        }
    }
}

