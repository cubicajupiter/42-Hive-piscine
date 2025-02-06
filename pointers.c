#include <stdio.h>

int	main(void)
{
	int	x;
	int	*pX;
	int	y;
	char	str[] = "ok leg";

	x = 4;
	pX = &x;
	y = *pX;

	printf("%d %d, %d", x, y, *pX);

	int	i = 4;
	printf(" %s", &str[i]);
	printf(" %c", (str + i));
	return 0;
}
