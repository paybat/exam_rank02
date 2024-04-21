#include <stdlib.h>

int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i])
		i++;
	return(i);
}

char    *ft_strdup(char *src)
{
	int i;
	int len;
	char  *dup;

	if(!src)
		return(NULL);
	i = 0;
	len = ft_strlen(src);
	dup = malloc((len + 1) * sizeof(char));
	if(!dup)
		return (NULL);
	while(src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}