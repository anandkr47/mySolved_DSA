package ThreadDelay;

public class ThreadDelay extends Thread{
	public void run() {
		int i;
		System.out.println("Running");

		try {
			for(i=1;i<=10;i++) {
				System.out.println(i);
				if(i==5) {
					Thread.sleep(5000);
				}
			}
		}catch(Exception e){
			System.out.println("exception");
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ThreadDelay t1=new ThreadDelay();
		t1.start();
		
	}

}
