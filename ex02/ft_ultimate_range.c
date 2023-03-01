/*#include <stdio.h>*/
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*result;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	result = (int *)malloc(sizeof(int) * (max - min));
	if (result == NULL)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	*range = result;
	return (i);
}
/*
int	main(void)
{
	int min = 10;
	int max =20;
	int *range;
	int size;
	int i = 0;

	size = ft_ultimate_range(&range, min, max);
	if (range == NULL)
	{
		printf("range est nul\n");
		return (1);
	}
	while (i < size)
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}
*/
