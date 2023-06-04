#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,f;
    f=0;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0){
            f=f+i;
        }
    }if(f==n){
        printf("%d is a perfect number",n);
    }if(f<n){
        printf("%d is a defficient number",n);
    }if(f>n){
        printf("%d is a sufficient number",n);
    }
    return 0;
}
