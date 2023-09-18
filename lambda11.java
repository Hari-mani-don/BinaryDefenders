package Hari;
import java.util.Arrays;
import java.util.List;
import java.util.Optional;

public class Main{
	public static void main(String args[]) {
		List<Integer> number = Arrays.asList(9,2,3,4,5,6,2,9);
		Optional<Integer> min = number.stream()
                .min(Integer::compareTo);	
		System.out.println("Min"+min);
	}
}
