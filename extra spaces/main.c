#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void printPatternUtil(const char str[],
					char buff[], int i,
							int j, int n)
{
	if (i == n)
	{
		buff[j] = '\0';
		printf("%s\n",buff);
		return;
	}
	buff[j] = str[i];
	printPatternUtil(str, buff, i + 1, j + 1, n);

	buff[j] = ' ';
	buff[j + 1] = str[i];

	printPatternUtil(str, buff, i + 1, j + 2, n);
}

void printPattern(const char* str)
{
	int n = strlen(str);
	char buf[2 * n];

	buf[0] = str[0];

	printPatternUtil(str, buf, 1, 1, n);
}

int main()
{
    char s[100];
    scanf("%s",&s);
	const char* str=s;

	printPattern(str);
	return 0;
}
