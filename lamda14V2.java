package Hari;
import java.util.function.Predicate;
public class Main{
	public static void main(String args[]) {
		Predicate<String> palindrome = str ->{
		   String reverse = new StringBuilder(str).reverse().toString();
		   return reverse.equals(str);
	   };
	  
		 boolean b = palindrome.test("amma");
		 if(b) {
			   System.out.print("is  palindrome");
			   }else {
				   System.out.print(" is not palindrome");
			   }
		
	}
}

