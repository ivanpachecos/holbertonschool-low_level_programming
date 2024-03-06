
/**
  * _memcpy - copies memory area
  * @src: pointer destination
  * @dest: source
  * @n: unsigned
  * Return: value modificed
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
