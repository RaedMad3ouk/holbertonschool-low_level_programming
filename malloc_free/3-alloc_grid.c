#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **x;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

x = malloc(height * sizeof(int*));
	if (x == NULL)
		return (NULL);

for(i = 0; i < height; i++)
{
	x[i] = malloc(width * sizeof(int*));

	if (x == NULL)
	{
		for(i = 0; i < height; i++)
			free (x[i]);
		free (x);
		return (NULL);
	}
	
	for(j = 0; j < width; j++)
		x[i] [j] = 0;
}
return (x);
}