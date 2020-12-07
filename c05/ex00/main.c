#include <stdio.h>
#include <stdlib.h>

int ft_iterative_factorial(int nb)
{
	int result;

	if (nb == 0)
		return(1);
	result = 1;
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

int main()
{
    printf("%d\n",ft_iterative_factorial(5));
    return 0;
}
