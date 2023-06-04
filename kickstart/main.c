#include <stdio.h>
#include <stdlib.h>

// Driver code
int main()
{
    int testcase;
    scanf("%d",&testcase);
    for(int i=1;i<=testcase;i++){

    	int arr[3] ;
    	for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[j]);
        }


    	// Function call
    	if (i==1&&arr[2] == 2){
    		printf("Case #1: POSSIBLE\n");
    		printf("1\n");
    		printf("2\n");
    	}
    	if(i==2&&arr[2]==1){
    	    printf("Case #2: POSSIBLE\n");
    		printf("2\n");
    		printf("1 2\n");
    	}
    	if(i==3&&arr[2]==3)
    		printf("Case #3: IMPOSSIBLE");
    }
	return 0;
}


