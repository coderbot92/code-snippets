import java.util.*;
/**
 * StringBuilder is used when we need mutable strings that will be appended or modified in some way alot. 
 * Normal strings are immutable so every time you mutate it you get a new copy of whole string. 
 * This could make code slower when dealing with large strings with many modification operations.
 */
public class EvenOddChars {
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = scan.nextLine();
        scan.close();
        
        char[] charArray = str.toCharArray();
        StringBuilder evenString = new StringBuilder();
        StringBuilder oddString = new StringBuilder();
        
        for (int index = 0; index < charArray.length; ++index) {
            if (index % 2 == 0) {
                evenString.append(charArray[index]);
            } else {
                oddString.append(charArray[index]);
            }
        }
        
        System.out.println("even string: " + evenString);
        System.out.println("odd string: " + oddString);
    } 
}