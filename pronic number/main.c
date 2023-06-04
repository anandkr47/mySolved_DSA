#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n;
   int flag=0;
    printf("enter a number \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i*(i+1)==n){
            flag=1;
            break;
        }
    }
    if(flag==1)
        printf("%d is pronic number",n);
    else
        printf("%d is not pronic number",n);
    return 0;
}
