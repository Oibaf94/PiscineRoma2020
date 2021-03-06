#include <stdio.h>
#include <stdlib.h>

int ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int ft_find_next_prime(int nb)
{
	int i;

	i = nb + 1;
	while(i <= 2147483647)
	{
		if (ft_is_prime(i) == 1)
			return (i);
		i++;
	}
	return (0);
}

int main()
{
    printf("%d\n",ft_find_next_prime(7907));
    return 0;
}
