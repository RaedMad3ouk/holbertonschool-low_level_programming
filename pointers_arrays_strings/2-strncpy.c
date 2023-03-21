
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	
	while (n != 0 && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	
	while (n != 0 && dest[i] != '\0')
		{
		dest[i] = '\0';
gi
		}
	return (dest);
}