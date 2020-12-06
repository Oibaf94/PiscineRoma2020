#include <stdio.h>
#include <stdlib.h>

int ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 2)
		return (1);
	if (index != 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	else
		return (0);
}
int main()
{
    printf("%d\n",ft_fibonacci(8));
    return 0;
}
