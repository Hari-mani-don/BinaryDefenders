package Hari;
import java.util.Arrays;
import java.util.List;
public class Main{
	public static void main(String args[]) {
		
		List<String> letter = Arrays.asList("r", "hariMani:)", "green");
		
		find match = ()  -> {
			String get = letter.get(0);
			int FirstStringLen = get.length();
			int small=FirstStringLen;
			int large=FirstStringLen;
			int i=0;
			while(i<letter.size()) {
				String StringIndex = letter.get(i);
				int indexLength = StringIndex.length();
				
				if(indexLength>large) {
					large = indexLength;
				}else {
					if(indexLength<small) {
					small = indexLength;
				    }
				}
				i++;
			}
			System.out.println("Large of :"+large);
			System.out.println("Large of :"+small);
		};
		
		match.word();
		
	}
}
interface find{
	void word();
}
