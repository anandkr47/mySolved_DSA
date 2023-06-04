#include <stdio.h>
#include <stdlib.h>

int countBits(int a)
{
	int count = 0;
	while (a) {
		if (a & 1)
			count += 1;
		a = a >> 1;
	}
	return count;
}
int main()
{
     printf("enter the size of arr\n");
	int n,i,j;
	int key1,key2;
	scanf("%d",&n);
	int arr[n];
	int aux[n];
	for (int i = 0; i < n; i++){
		scanf("%d",&arr[i]);
	}
	for (int i = 0; i < n; i++){
		aux[i] = countBits(arr[i]);
	}
    for (int i = 1; i < n; i++) {
		 key1 = aux[i];
		 key2 = arr[i];
		 j = i - 1;

		while (j >= 0 && aux[j] < key1) {
			aux[j + 1] = aux[j];
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		aux[j + 1] = key1;
		arr[j + 1] = key2;
	}


    for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
    return 0;
}
