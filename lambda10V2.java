package Hari;
import java.util.function.BiFunction;
public class Main{
	public static void main(String args[]) {
		
		BiFunction<String, String, String> concatenate = (str, str1) -> str + str1;
		
		String a = "hari ";
		String b = "mani";
		
		System.out.print("output: "+concatenate.apply(a, b));
	}
}
