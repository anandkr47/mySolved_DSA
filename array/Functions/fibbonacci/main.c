#include <stdio.h>
#include <stdlib.h>

/*int fibbo(int n)
{
    int i;
    int F[n+2];
     F[0]=0;
     F[1]=1;
    for(i=2;i<=n;i++){
        F[i]=F[i-1]+F[i-2];
    }
    return F[n];
}*/

int fibbon(int f)
{
    if(f<2)
        return f;
    return fibbon(f-1)+fibbon(f-2);
}
int main()
{
    int a;
    printf("enter the nth term\n");
    scanf("%d",&a);
    printf("The %dth tearm of fibbonacci series is %d",a,fibbon(a));
    return 0;
}
