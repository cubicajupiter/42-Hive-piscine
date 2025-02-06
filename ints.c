int	main(void)
{
	#include<stdio.h>
	int	a = 9;
	int b = 1;
	int	c = 90;
	int d = 4967;
	printf("%lu\n", sizeof(a));
	printf("%lu\n", sizeof(b));
	printf("%lu\n", sizeof(a+b));
	printf("%lu\n", sizeof(c));
	printf("%lu\n", sizeof(a+b+c));
	printf("%lu\n", sizeof(d));
}
