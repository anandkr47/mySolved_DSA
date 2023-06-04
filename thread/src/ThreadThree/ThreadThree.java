package ThreadThree;

class Max extends Thread {

	  public void run(){
		  
				  System.out.println("max running");
			  }
		  
		 
	  
		 

}
class Min extends Thread{
	public void run(){
		System.out.println("min running");
		  }
	
	
}
class Norm extends Thread{
	public void run(){
		System.out.println("norm running");
		  }
	
	public static void main(String args[]) {
		Max m1=new Max();
		Min m2=new Min();
		Norm m3=new Norm();
		m1.start();
		m2.start();
		m3.start();
	}

}
