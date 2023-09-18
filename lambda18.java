package Hari;

public class Main{
	public static void main(String args[]) {
		Square SquareCheck = n -> {
			if(n<=3){
				return false;
			}
			int value=0;
			for(int i=2;i<=n;i++) {
				 value = i *i;
				if(value==n) {
					return true;
				}	
				if(value>n)
					return false;
			}
			
				return false;
		};
		int n = 10000;
		System.out.println(SquareCheck.sq(n));
		
		
		
		
		
	}
}
interface Square{
	boolean sq(int n);
}
