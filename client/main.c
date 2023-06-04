#include <stdio.h>
int main() {
	int d, i, best, pos;

	printf("\nenter the no of delers: ");
	scanf("%d", &d);

	int deler[d];
    printf("\nInput the price offered by each deler:\n ");
	for(i = 0; i < d; i++) {
			scanf("%d", &deler[i]);
	}
	best = deler[0];
	pos= 0;
	for(i = 0; i < d; i++) {
		if(best > deler[i]) {
			best = deler[i];
			pos = i;
		}
	}

	printf(" %d\n", pos);
	return 0;
}
