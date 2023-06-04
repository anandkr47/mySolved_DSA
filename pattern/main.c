#include <stdio.h>
#include <math.h>
int main() {
   int i, j, rows,k;
    int result=1;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         for(k=0;k<i;k++)
         {
             result=result*2;
         }
        printf("%d ", result);
        result=1;
      }
      printf("\n");
   }
   return 0;
}
