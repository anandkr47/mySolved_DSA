package ThreadString;

public class ThreadString extends Thread {

	  public void run(){
		  int i=0;
		  String Colour[]= {"white","blue","black","green","red","yellow" };  
		 while(Colour[i]!="red") {
			 System.out.println(Colour[i]);
			 i++;
		 }
	  } 
		 public static void main(String args[]){  
		  ThreadString t1=new ThreadString();  
		  t1.start();
		 
}
}