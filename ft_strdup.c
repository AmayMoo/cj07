#include <stdlib.h>
/*#include <stdio.h>*/

char	*ft_strdup(char	*src)
{
	char	*dest;
	int		len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	dest = (char *)malloc(sizeof(char) * (len + 1));
	if (dest == NULL)
	{
		return (NULL);
	}
	len = 0;
	while (src[len] != '\0')
	{
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	str1[] = "salut vicius";
	char	*str2;

	str2 = ft_strdup(str1);
	printf("la chaine : %s\n", str1);
	printf("la chaine copiée : %s\n", str2);
	free(str2);
	return (0);
}
*/
