package thread;

public class ThreadName extends Thread {

	  public void run(){  
	  }
		 public static void main(String args[]){  
		  ThreadName t1=new ThreadName();  
		  ThreadName t2=new ThreadName();  
		  t1.setName("Scooby"); 
		  t2.setName("Saggy"); 
		   
		  t1.start();  
		  t2.start();  
		  
		   
		  System.out.println(t1.getName());  
		  System.out.println(t2.getName());  
		 }  
		 
}
