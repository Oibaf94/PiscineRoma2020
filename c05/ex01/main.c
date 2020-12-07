#include <stdio.h>
#include <stdlib.h>

int ft_recursive_factorial(int nb)
{
	int res;

	if (nb == 0)
		return (1);
	if (nb > 1)
		res = nb * ft_recursive_factorial(nb - 1);
	else
		return (nb);
	return (res);
}

int main()
{
    printf("%d\n",ft_recursive_factorial(10));
    return 0;
}
