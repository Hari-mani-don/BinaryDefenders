package Hari;
import java.util.Arrays;
import java.util.List;
public class Main{
	public static void main(String args[]) {
		
		List<String> letter = Arrays.asList("red", "blue", "green");
		
		Word w = a->{
			int size = letter.size();
			int i=0;
			while(i<size) {
				if(letter.get(i).equals(a)) {
					return true;
				}
				i++;
			}
			return false;
		};
		System.out.println(w.word("blue"));
		
	}
}
interface Word{
	boolean word(String a);
}
