#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,f;
    int c=0;

    printf("the prime no between 10 to 50 are");
    for(i=1;i<10;i++){
        f=0;
        for(j=2;j<=i/2;++j){
            if(i%j==0){
                f=1;
                break;
            }
         }
        if(f==0)
            printf("%d \n",i);
    }
    return 0;
}
