#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (*to_find == 0)
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] == str[i + j])
		{
			if (to_find[j + 1] == 0)
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int main()
{
	char str1[130] = "You are really not supposed to be reading this.HACS is never gonna give you up, never gonna let you down";
    char str12[130] = "HACS is ne";
    printf("---Expected-Output---\n");
	printf("%s$\n",strstr(str1,str12));
	printf("---Actual-Output---\n");
	printf("%s$\n",ft_strstr(str1,str12));
    return 0;
}
