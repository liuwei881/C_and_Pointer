#include <stdio.h>
#include <stdlib.h>
#if 0
int
main()
{
	int c;
	char sum = -1;
	while ((c = getchar()) != EOF)
	{
		putchar(c);
		sum += c;
	}
	printf("%d\n", sum);
	return 0;
}
#endif