#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int num;
	int *arr;
	int i;

	num = max - min;
	if (num < 1)
		return (NULL);
	else
	{
		arr = (int *)malloc(sizeof(int) * num);
		if (arr == NULL)
			return (NULL);
		i = -1;
		while (++i < num)
			arr[i] = min + i;
		return (arr);
	}
}

int main()
{
    int *arr;
    int i = 0;
    int a = -6;
    int b = 15;
    arr = ft_range(a,b);
    if (arr == NULL)
		printf("Null\n");
	else
	{
		while(i < (b - a))
		{
			printf("%d ",arr[i]);
			i++;
		}
		printf(".");
	}


    return 0;
}
