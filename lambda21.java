package Hari;




public class Main{
	public static void main(String args[]) {
		
		Prime sumOfPrime = (start,end) ->{
			int sum=0;
			for(int i=start;i<end;i++) {
				int prime =1;
				for(int j=2;j<i/2;j++) {
					if(i%j==0) {
						prime =0;
					}
				}
				if(prime==1) {
					sum+=i;
				}
			}
			System.out.println("Sum of Prime: "+sum);
		};
		        sumOfPrime.isprime(100,200);
	}
}

interface Prime{
	void isprime(int a, int b);
}
