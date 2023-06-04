
#include <stdio.h>

int insertSorted(int arr[], int n, int b[])
{

	int i;
	for (i = n - 1; (i >= 0 && arr[i] > b[i]); i--)
		arr[i + 1] = arr[i];

	arr[i + 1] = b[i];

	return (n + 1);
}

int main()
{
    printf("enter the no of books");
	int book[20];
	int i;
	int n,p;
	int c=0;
	scanf("%d",&n);
	printf("enter the the books");
	book[n];
	for(i=0;i<n;i++)
    {
        scanf("%d",&book[i]);
    }
	printf("enter the no of books to be inserted");
	scanf("%d",&p);
    int b[p];
    for(int i=0;i<p;i++){
        scanf("%d",&b[i]);
    }
	for (i =0;i<n;i++)
    {
        if(b[i]>book[i]){
            c=i;
        }
        else
        {
            c=c+i;
        }
        printf("%d",c);

    }

}
