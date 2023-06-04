/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class prime_revarshal
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc=new Scanner(System.in);
		int t=sc.nextInt();
		int c;
		int a;
		while (t!=0){
		    int n=sc.nextInt();
		    String str1,str2;
		    str1=sc.nextLine();
		    str2=sc.nextLine();
		    char str1arr[]=str1.toCharArray();
		    char str2arr[]=str2.toCharArray();
		   c=0;
		   a=0;
		    for(int i=0;i<n;i++){
		        if(str1arr[i]==1){
		            c++;
		        }
		        if(str2arr[i]==1){
		            a++;
		        }
		    }
		    if(c==a){
		        System.out.println("YES");
		    }else{
		        System.out.println("NO");
		    }
		   t--; 
		} 
		
	}
}
