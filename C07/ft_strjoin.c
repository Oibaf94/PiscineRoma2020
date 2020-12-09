#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	int		l;

	if (size == 0)
	{
		result = malloc(1);
		*result = 0;
		return (result);
	}
	else
	{
		l = 0;
	}
}

int main()
{
    printf("Hello world!\n");
    return 0;
}
