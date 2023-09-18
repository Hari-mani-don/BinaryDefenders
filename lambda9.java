package Hari;
public class Main{
	public static void main(String args[]) {
		int number =3;
		Prime p = () -> 
		{
			int prime =1;
			for(int i=2;i<number/2;i++) {
				if(number%i == 0) {
					prime =0;
				}
			}
			if(prime ==1) {		
				System.out.println(number+" is  a prime ");
			}else {
			System.out.println(number+" is not prime Number");
			}
		};
		p.prime();
		
	}
}
interface Prime{
	void prime();
}
