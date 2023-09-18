package Hari;

public class Main{
	public static void main(String args[]) {
		Palindrome palin = str -> {
		   int len = str.length();
		   while(str.charAt(len-1)==' ') {
			  
			   len-=1;
		   }
		   int count=0, a=0, c=1;
		   String b = str;
		   while(a<len){
			  if(str.charAt(a)==str.charAt(len-c)) {
				  count++;
			  }else {
				  break;
			  }
			   a++;
			   c++;
		   }
		   if(count ==len) {
		   System.out.print("\'"+str+"\'" +" is a palindrome");
		   }else {
			   System.out.print("\'"+str+"\'" +" is not palindrome");
		   }
		};
		palin.word("amma ");
		
	}
}
interface Palindrome{
	void word(String a);
}
