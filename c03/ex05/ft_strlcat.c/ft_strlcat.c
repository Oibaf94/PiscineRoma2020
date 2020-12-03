#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlen(char *str)
{
	char			*charptr;
	unsigned int	i;

	charptr = str;
	i = 0;
	while (*(charptr + i))
		i++;
	return (i);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	char			*d;
	char			*s;
	unsigned int	n;
	unsigned int	dlen;

	d = dest;
	s = src;
	n = size;
	while (n-- != 0 && *d)
		d++;
	dlen = d - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s)
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = 0;
	return (dlen + (s - src));
}

int main()
{
    char string[] = "Heartless is a very\0 error prone person";
	char string2[] = " handsome guy.";
	char string0[] = "Heartless is a very\0 error prone person";

	printf("---Expected-Output---\n");
	//printf("%lu -- ",strlcat(string0, string2, 14));
	printf("%s\n", string0);
	printf("---Actual-Output---\n");
	printf("%d -- ",ft_strlcat(string, string2, 34));
	printf("%s\n", string);

	return (0);
}
