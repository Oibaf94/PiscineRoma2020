#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int num;
	int *arr;
	int i;

	num = max - min;
	if (num < 1)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * num);
	if (arr == NULL)
	{
		*range = NULL;
		return (0);
	}
	i = -1;
	while (++i < num)
		arr[i] = min + i;
	*range = arr;

	return (num);
}

int main()
{
    int *arr;
    int i = 0;
    int a = 16;
    int b = 15;
    int **pptr;
    int size;

    pptr = &arr;

    size = ft_ultimate_range(pptr,a,b);
    if (arr ==0)
		printf("SIZE 0\n");
	else
	{
		while(i < size)
		{
			printf("%d ",arr[i]);
			i++;
		}
		printf(".\n");
		printf("size: %d.\n",size);
	}


    return 0;
}
