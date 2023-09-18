package Hari;

public class Main{
	public static void main(String args[]) {
		
		String h = "hari mani  ";
		Word  wordcount = s -> s.split("\\s+").length;
		System.out.println("Count of word "+wordcount.word(h));
	}
}
interface Word{
	int word(String a);
}
