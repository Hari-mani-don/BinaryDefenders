package Hari;

import java.util.Arrays;
import java.util.List;
import java.util.function.Function;
import java.util.function.Predicate;


public class Main{
	public static void main(String args[]) {
		
		List<String> string = Arrays.asList("hari","mani","done");
		boolean isAllUpper = checkCase(string, s-> s.equals(s.toUpperCase()), String::toUpperCase);
		boolean isAllLower = checkCase(string, s-> s.equals(s.toLowerCase()), String::toLowerCase);
		boolean isAllMixed = !isAllUpper && !isAllLower;
		
		System.out.println(isAllUpper);
		System.out.println(isAllLower);
		System.out.println(isAllMixed);
		
	}
	public static boolean checkCase(List<String> string, Predicate<String> checkFunction, Function<String, String> ConvertFunction) {
		String firstString = string.get(0);
		String ConvertedString = ConvertFunction.apply(firstString);
		
		
		return string.stream()
				.allMatch(s -> checkFunction.test(s));
		
	}
}

