package Hari;
public class Main{
	public static void main(String args[]) {
		
		Concatenate con = (s1,s2) ->{
			
			char array[] = new char[s1.length()+s2.length()];
			int i=0, c=0;
			while(i<s1.length()) {
				array[i]=s1.charAt(i);
				i++;
			}
			while(c<s2.length()) {
				array[i]=s2.charAt(c);
				    i++;
					c++;
			}
			i=0;
			System.out.print("array: ");
			while(i<s1.length()+s2.length()) {
				System.out.print(array[i++]);
			}
		};
		String a ="Hari ";
		String b="mani";
		con.concatenate(a,b);
	}
}
interface Concatenate{
	void concatenate(String a, String b);
}
