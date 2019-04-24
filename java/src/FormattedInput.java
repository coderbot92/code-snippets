import java.util.*;

/**
 * Reading formatted and unformatted input using Scanner class
 * next() methods --- read tokens and only consume leading whitespaces or leading end line chars
 * nextLine() methods --- consume only trailing end line chars
 */
public class FormattedInput {
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        double price = scan.nextDouble();
        
        // consuming leading endline char
        scan.nextLine();
        
        String product = scan.nextLine();
        
        scan.close();
        
        System.out.println("Price is: " + price);
        System.out.println("Product is: " + product);
    }

}