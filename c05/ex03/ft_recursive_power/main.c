#include <stdio.h>
#include <stdlib.h>

int ft_recursive_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	if (power != 0)
		return (nb * ft_recursive_power(nb, power - 1));
	else
		return (1);
}
int main()
{
    printf("%d\n",ft_recursive_power(10,3));
    return 0;
}
