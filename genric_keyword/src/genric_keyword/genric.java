package genric_keyword;

public class genric {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
			try {
				int n=5;
				int div=n/0;
				System.out.println(div);
			}
			
			catch(ArithmeticException e){
				System.out.println("Division by zero not popssible");
			}
			
			finally{
				System.out.println("Exception Handeled");
			}
			System.out.println("last");
	}

}
