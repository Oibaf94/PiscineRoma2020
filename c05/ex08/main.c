#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	print_sol(int *array);

void	sort_solution(int *ar, int *sortarr)//gotta sort by ascending
{
	int i;

	i = 0;

}

int		check_solution(int *ar,int *sol)
{
	int x;
	int y;

	x = 0;
	while (x < 10)
	{
		y = 1;
		while (y < 10)
		{
			//printf("X:%d,Y:%d",x,y);
			if (x + y < 10)
				if ((ar[x] + y) == ar[x + y] || (ar[x] - y) == ar[x + y])
					return (0);
			if (x - y > -1)
				if ((ar[x] + y) == ar[x - y] || (ar[x] - y) == ar[x - y])
					return (0);
			y++;
		}
		x++;
	}
	(*sol)++;
	//sort_sol(ar);
	//printf("%d\n",*sol);
	//print_sol(ar);
	return(1);
}

int	permute(int *array,int i,int *sol) {
	int temp;
	if (i == 9)
		check_solution(array,sol);
	int j;
	j = i;
	while(j < 10)
	{
		//printf("%d",i);
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		permute(array,i+1,sol);
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
		j++;
	}
	return (0);
}

void	print_sol(int *array)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = '0' + array[i];
		write(1,&c,1);
		i++;
	}
	write(1,"\n",1);
}

int		main()
{
	int array[10];
	int sorted[1500][10];
	int i;
	int sol_n;
	int *sol_ptr;

	sol_n = 0;
	sol_ptr = &sol_n;
	i = -1;
	while(++i < 10)
		array[i] = i;
	i = 1;
	while (sol_n < 725)
	{
		if (permute(array,0,sol_ptr) == 1);
			if (check_solution(array,sol_ptr) == 1)
				sort_solution(array,sorted);
			//printf("%d\n",sol_n);
	}
	printf("sol:%d",sol_n);
    return (sol_n);
}
