package Hari;
import java.util.function.Predicate;
public class Main{
	public static void main(String args[]) {
		
		Predicate<Integer> SquareCheck = n ->{
			if(n<=3)
				return false;
			int sqrt = (int) Math.sqrt(n);
			return  sqrt * sqrt ==n ;
		};
		
		System.out.println(SquareCheck.test(0));
	
		
		
		
		
	}
}
