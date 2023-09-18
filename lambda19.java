package Hari;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;


public class Main{
	public static void main(String args[]) {
		
		List <Integer> number = Arrays.asList(10,0,3,1,2);
		int len = number.size();
		List<Integer> list =  number.stream().sorted().collect(Collectors.toList());
        System.out.println("Second Largest Number:"+list.get(len-2));
        System.out.println("Second smallest Number:"+list.get(1));
			
				
		
		
	}
}
