package ThreadoddEven;

class Even extends Thread {

	  public void run(){
		  int i;
		  for(i=1;i<=20;i++) {
			  if(i%2!=0) {
				  System.out.println(i);
			  }
		  }
		 
	  } 
		 

}
class Odd extends Thread{
	public void run(){
		 int i;
		  for(i=1;i<=20;i++) {
			  if(i%2!=0) {
				  System.out.println(i);
			  }
		  }
	}
	public static void main(String args[]) {
		Even e1=new Even();
		Odd o1=new Odd();
		try {
			e1.join();
			o1.join();
		}catch(InterruptedException e) {
			e.printStackTrace();
		}
		e1.start();
		o1.start();
	  }
}
