#include <unistd.h>

int	check_solution(int *ar, int *sol)
{
	int x;
	int y;
	char c;

	x = -1;
	while (++x < 10)
	{
		y = 0;
		while (++y < 10)
		{
			if (x + y < 10)
				if ((ar[x] + y) == ar[x + y] || (ar[x] - y) == ar[x + y])
					return (0);
			if (x - y > -1)
				if ((ar[x] + y) == ar[x - y] || (ar[x] - y) == ar[x - y])
					return (0);
		}
	}
	(*sol)++;
	x = -1;
	while (++x < 10)
		if ((c = '0' + ar[x]) > 0)
			write(1,&c,1);
	write(1,"\n",1);
	return(1);
}

int next_permutation(int *array)
{
	int i;
	int j;
	int temp;

    i = 9;
	j = 9;
    while (i > 0 && array[i - 1] >= array[i])
        i--;
    if (i == 0)
		return (0);
    while (array[j] <= array[i - 1])
        j--;
    temp = array[i - 1];
    array[i - 1] = array[j];
    array[j] = temp;
    j = 9;
    while (i < j) {
        temp = array[i];
        array[i++] = array[j];
        array[j--] = temp;
    }
    return (1);
}

int		main()
{
	int array[10];
	int i;
	int sol_n;
	int *sol_ptr;

	sol_n = 0;
	sol_ptr = &sol_n;
	i = -1;
	while(++i < 10)
		array[i] = i;
	i = 1;
	while (next_permutation(array) != 0)
		check_solution(array,sol_ptr);
    return (sol_n);
}
