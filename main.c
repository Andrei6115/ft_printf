#include <stdio.h>
#include "ft_printf.h"
int main(int argc, char const *argv[])
{
	/* code */
	int a = 10;
	int *b = &a;
	ft_printf("%d", ft_printf("%p", &a));
	printf("\n ------------------- \n");
	printf("%d", printf("%p", &a));

	return 0;
}
                  