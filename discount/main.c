#include <stdio.h>
#include <stdlib.h>

int main()
{
    int discount;
    int quantity;
    int prise;
    printf("enter the quantity of purchase\n");
    scanf("%d",&quantity);
    int cost= 25*quantity;
    discount= cost*10/100;
    prise=cost-discount;
    if(quantity>=100)
        printf("after getting 10 percent discount on %d your prise is %d\n",cost,prise);
    else
        printf("you got no discount your purchase prise is %d\n",cost);
    return 0;
}
