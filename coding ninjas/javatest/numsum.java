import java.util.*;
class numsum{
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        int temp;
        int sum=0;
        int i,j;
        for(i=0;i<n ;i++){
            temp=0;
            for(j=i;j<n ;j++){
                temp=temp+arr[j];
            }
            
            sum=sum+temp;
        }
        System.out.println(sum);
    }
}