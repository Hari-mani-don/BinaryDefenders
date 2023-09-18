package Hari;
import java.util.Arrays;
import java.util.List;
public class Main{
	public static void main(String args[]) {
		
		List<Integer> number = Arrays.asList(1,2,3,4,5,6,7,8,9,10);
		Integer sumOfOdd = number.stream()
				.filter(n ->n %2 ==1)
				.mapToInt(n -> n *n)
				.sum();
		Integer sumOfEven = number.stream()
				.filter(n ->n %2 ==0)
				.mapToInt(n -> n * n)
				.sum();
		System.out.println("Square of odd: "+sumOfEven);
		System.out.println("Square of odd: "+sumOfOdd);
		
	}
}

