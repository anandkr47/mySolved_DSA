   import java.util.*;
   class opp{

      public static void main(String[] args) {
         Scanner sc=new Scanner(System.in);
         int n,i,j,m;
         n=sc.nextInt();
         for(int k=n;k>0;k--) {
         for(i=1;i<=n;i++)
         {
             
                 
                  if(i==k){
                     for(j=i;j>2;j--)
                     {
                        System.out.print("*");
                     }
                  }
                  else{
                     System.out.print(i);
                  }
             }
             for(j=n;j>0;j--){
               if(j==k){
                  for(m=j;m>2;m--)
                  {
                     System.out.print("*");
                  }
               }
               else{
                  System.out.print(j);
               }

             }
             System.out.println();
         }
       // Write your code here
 
    }
      

       // Write your code here
 
    }
      

   