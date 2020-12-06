#include <stdio.h>
#include <stdlib.h>

int ft_sqrt(int nb)
{
	int test;

	test = 0;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	while ((test * test) <= nb)
	{
		if (test * test == nb)
			return (test);
		else
			test = test + 1;
	}
	return (0);
}

int main()
{
    printf("%d\n",ft_sqrt(25));
    return 0;
}
