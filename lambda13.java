package Hari;

public class Main{
	public static void main(String args[]) {
		
		Word w = a -> {
			int i=0;
			int word=1;
			while(i<a.length()) {
				if(a.charAt(i)==' ') {
				word++;
			}
				i++;
			}

			
			System.out.println("Count of Word: "+word);
		};
		w.word("hair");
	}
}
interface Word{
	void word(String a);
}
