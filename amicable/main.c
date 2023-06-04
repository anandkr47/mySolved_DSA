#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,i,f,j,fc;
    f=0;
    fc=0;
    printf("enter 2 number\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
     for(i=1;i<n1;i++){
        if(n1%i==0)
            f=f+i;
    }
    for(j=1;j<n2;j++){
        if(n2%j==0)
            fc=fc+j;
    }
    if(f==n2&&fc==n1){
        printf("%d and %d are Amicable number\n",n1,n2);
    }else{

        printf("%d and %d are not Amicable number\n",n1,n2);
    }
    return 0;

}

