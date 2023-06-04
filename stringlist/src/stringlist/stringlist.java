package stringlist;
import java.util.*;
public class stringlist {
	List<String> list = new ArrayList<String>();
	void insert(String a){
		list.add(a);
		if(list.contains(a)){
			System.out.println("element insert Sucessfully");
		}
		
	}
	void delete(String a) {
		boolean ans=list.contains(a);
		if(ans) {
			list.remove(a);
		}
		else {
			System.out.println("element not found");
		}
		
	}
	void search(String a) {
		boolean ans=list.contains(a);
		if(ans) {
			System.out.println(a);
		}
		else {
			System.out.println("element not found");
		}
	}
	void display() {
		if(list.isEmpty()){
			System.out.println("list is empty");
		}
		else {
			System.out.println("The items in thelist are:");
			for(int i=0;i<list.size();i++) {
				System.out.println(list.get(i));
			}
		}
	}

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		stringlist s=new stringlist();
		do {
		System.out.println("1.insert");
		System.out.println("2.search");
		System.out.println("3.delete");
		System.out.println("4.display");
		System.out.println("5.exit");
		Scanner sc=new Scanner(System.in);
		int ch=sc.nextInt();
		switch(ch)
		{
		case 1:
			System.out.println("enter the item to be inserted");
			String name=sc.next();
			s.insert(name);
			break;
		case 2:
			System.out.println("enter the item to be search");
			String item=sc.next();
			s.search(item);
			break;
		case 3:
			System.out.println("enter the item to be deleted");
			String ele=sc.next();
			s.delete(ele);
			break;
		case 4:
			s.display();
			break;
		case 5:
			System.exit(0);
		}
		sc.close();
		}while(true);
		
	}

}
