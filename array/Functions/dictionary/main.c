#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    int n,i,j;
    printf("enter how many names you want to enter \n");
    scanf("%d",&n);
   char A[n][100];
   char t[100];
   printf("enter the string one by one\n");
   for(i=0;i<n;i++){
        scanf("%s",A[i]);
   }
   for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(strcmp(A[i],A[j])>0){
                strcpy(t,A[i]);
                strcpy(A[i],A[j]);
                strcpy(A[j],t);

            }
        }
   }
   printf("The sorted string is \n");
   for(i=0;i<n;i++){
    printf("%s\n",A[i]);
   }
    return 0;
}
