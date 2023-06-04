#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int similarities(char * s){

	int i=0;
	int sim=0;
	while(s[i]!='\0'){
		int k=0;
		int j=i;
		while(s[j+k]!='\0' && s[j+k]==s[k++])
			sim++;
		i++;
	}
	return sim;

}


int main() {

	int n,i;
    scanf("%d",&n);
	int arr[n];
    char str[100001];
   for(i=0;i<n;i++){
       scanf("%s",str);
        arr[i]=similarities(str);
   }
    for(i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
	return 0;
}


