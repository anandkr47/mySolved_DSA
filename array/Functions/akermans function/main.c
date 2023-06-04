#include <stdio.h>
#include <stdlib.h>
int ack(int m,int n){
    if (m==0){
        return n+1;
    }
    else if((m>0)&&(n==0)){
        return ack(m-1,1);
    }
     else if((m>0)&&(n>0)){
        return ack(m-1,ack(m,n-1));
    }
}
int main()
{
    int a,b;
    printf("enter the first argument\n");
    scanf("%d",&a);
    printf("enter the second argument\n");
    scanf("%d",&b);
    printf("\nthe value for acker mans function is %d\n",ack(a,b));
    return 0;
}
