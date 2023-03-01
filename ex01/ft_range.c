/*#include <stdio.h>*/
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
	{
		return (NULL);
	}
	result = (int *)malloc(sizeof(int) * (max - min));
	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
/*
int	main(void)
{
	int	min = 10;
	int	max = 20;
	int *range;
	int	i = 0;

	range = ft_range(min, max);
	if (range == NULL)
	{
		printf("erreur : le pointeur est nul\n");
		return (1);
	}
	while (i < max - min)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}
*/
