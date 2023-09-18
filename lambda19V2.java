package Hari;

import java.util.Arrays;
import java.util.List;
import java.util.Comparator;


public class Main{
	public static void main(String args[]) {
		
		List <Integer> num= Arrays.asList(1,2,3);
		Integer secondLargest = num.stream()
			      .distinct()
			      .sorted(Comparator.reverseOrder())
			      .skip(1)
			      .findFirst()
			      .orElse(null);
		Integer firstSmalest = num.stream()
				  .sorted()
			      .skip(1)
			      .findFirst()
			      .orElse(null);
		System.out.println("Second Largest Number: "+secondLargest);
		System.out.println("Second smallest Number: "+firstSmalest);
		
		        
	}
}
