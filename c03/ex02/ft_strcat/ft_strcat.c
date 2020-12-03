#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	char *d;
	char *s;

	d = dest;
	s = src;
	while (*d)
	{
		d++;
	}
	while (*s)
	{
		*d = *s;
		d++;
		s++;
	}
	*d = 0;
	return (dest);
}

int main()
{
    char str1[100] = "Senpai will nev\0er forget you";
    char str12[100] = "Senpai will nev\0er forget you";
    char str2[100] = "er notice you.\0er forget you";
    printf("---Expected-Output---\n");
    printf("%s\n", strcat(str1, str2));
    printf("---Actual-Output---\n");
    printf("%s\n",ft_strcat(str12,str2));
    return 0;
}
