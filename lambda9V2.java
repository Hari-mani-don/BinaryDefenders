package Hari;
import java.util.function.Predicate;
public class Main{
	public static void main(String args[]) {
		
		Predicate<Integer> is_prime = n  -> 
		{ 
			int a =  n;
			
			if(a<=1)
				return false;
			for(int i=2;i<a/2;i++) {
				if(a%i == 0) {
					return false;
				}
			}
			
			return true;	
				
		};
		boolean prime = is_prime.test(10);
		System.out.println("is Prime? " +prime);
		boolean prime1 = is_prime.test(5);
		System.out.println("is Prime? " +prime1);
		
		
		
	}
}
interface Prime{
	void prime();
}
