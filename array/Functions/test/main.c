#include <stdio.h>
#include <stdlib.h>

void main()
{
    //int x=0,y=2,z=3;
   /* switch(a/a % b){
        case 1: a=a-b;
        case 2: a=a+b;
        case 3: a=a*b;
        case 4: a=a/b;
        default: a=b;
    }*/
    int a[4]={5,1,15,99};
    int i,j,k;
    i=++a[1];
    j=a[1]++;
    k=a[i++];
     printf(" %d %d %d",i,j,k);

}
