#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src)
{
	char	*dupe;
	int		slen;

	slen = 0;
	while (src[slen])
		slen++;
	dupe = (char *)malloc(sizeof(char) * slen);
	if (dupe == NULL)
		return (NULL);
	slen = 0;
	while (src[slen])
	{
		dupe[slen] = src[slen];
		slen++;
	}
	dupe[slen] = 0;
	return (dupe);
}

int main()
{
    char s1[] = "I am unique";
    char *s2;

    s2 = ft_strdup(s1);
    printf("%s\n",s2);
    return 0;
}
