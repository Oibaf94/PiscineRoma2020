#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_iterative_power(int nb, int power)
{
	int i;
	int result;

	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	i = 1;
	result = nb;
	while (i < power)
	{
		result = result * nb;
		i++;
	}
	return (result);
}


int main()
{
    printf("%d\n",ft_iterative_power(10, 3));
    return 0;
}
