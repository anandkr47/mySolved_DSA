#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("enter 3 numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    printf("c = %d\n",c);
    if(a<b){
       if(a<c){
            printf("%d is smallest amoung three",a );
        }else
            {
               printf("%d is smallest among three",c);
            }
    }
    else if(b<c)
        printf("%d is smallest among three",b);
    else
        printf("%d is smallest among three",c);
    printf("\n");
    return 0;
}
