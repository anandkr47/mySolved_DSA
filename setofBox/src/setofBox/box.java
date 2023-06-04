package setofBox;
import java.util.*;
class box {
private double length=0.0;
private double weidth=0.0;
private double height=0.0;

public box(double l,double w,double h) {
weidth=w;
height=h;
length=l;
}
public void data() {
	System.out.println("length ="+length+"weidth="+weidth+"height"+height+"volume="+(weidth*height*length));

}


public static void main(String[] args) {
	
	System.out.println("Enter the number of box");
	Scanner sc=new Scanner(System.in);
	int n=sc.nextInt();
	
	HashMap <Double,box> box =new HashMap<>();
	for(int i=0;i<n;i++) {
		
		System.out.println("Enter the box"+i+"details");
		System.out.println("Enter length");
		double l=sc.nextDouble();
		System.out.println("Enter weidth");
		double w=sc.nextDouble();
		System.out.println("Enter height");
		double h=sc.nextDouble();
		
		
	if(!box.containsKey(l*w*h))
	{
		box.put(l*w*h, new box(l,w,h)) ;
	}
		
		
	}
	sc.close();
	
	
	box.forEach((key,val)->{
		
		val.data();
		
		
		
	});
	
	
	
}



}
