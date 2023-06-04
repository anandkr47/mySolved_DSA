#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    long int n,sq,i,c=0,div,sum,s1,s2;
    printf("enter a number to check for kaperaker no\n");
    scanf("%ld",&n);
    sq=n*n;
    long int t=sq;
    while(t!=0){
        c++;
        t=t/10;
    }
    for(i=1;i<c;i++){
        div=pow(10,i);
        s1=(sq/div);
        s2=(sq%div);
    }
    if(s1%10==0)
        s1=s1*10;
    if(s2%10==0)
        s2=s2*10;
    sum=s1+s2;


    printf("%ld is kaprikar no\n",sum);

    printf("%ld is not kapriker number",sum);
    return 0;
}
