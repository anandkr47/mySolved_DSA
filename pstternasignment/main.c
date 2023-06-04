#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *a = malloc(2), *b = 0, *x, c;
    int cnt, len = 1,i=1,lim,s;
    s=1;
    scanf("%d",&lim);
    for (sprintf(a, "%d",s); (b = realloc(b, len * 2 + 1)); a = b, b = x)
    {
        puts(x = a);
        for (len = 0, cnt = 1; (c = *a); )
        {
            if (c == *++a)
                cnt++;
            else if (c)
            {
                len += sprintf(b + len, "%d%c", cnt, c);
                cnt = 1;

            }

        }
      if(i==lim)
        break;
      i++;
    }

    return 0;
}
