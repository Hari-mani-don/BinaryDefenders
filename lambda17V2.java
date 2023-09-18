package Hari;
import java.util.Arrays;
import java.util.List;
public class Main{
	public static void main(String args[]) {
		
		List<String> letter = Arrays.asList("r3", "hariMani:)", "green");
		
		int match = letter.stream()
				.mapToInt(String::length)
				.min()
				.orElse(0);
		int match2 = letter.stream()
				.mapToInt(String::length)
				.max()
				.orElse(0);
		
		System.out.println("Small index value: "+ match);
		System.out.println("Small index value: "+ match2);
		
		
		
		
	}
}
