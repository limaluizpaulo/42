#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int				main()
{
	char			str0[50];
	char			str1[50];
	char			str2[] = "Concatenando 1";
	unsigned int	tamanho1;
	unsigned int	tamanho2;

	str0[0] = 'O';
	str0[1] = 'l';
	str0[2] = 'a';
	str0[3] = '\0';

	str1[0] = 'O';
	str1[1] = 'l';
	str1[2] = 'a';
	str1[3] = '\0';

	tamanho1 = ft_strlcat(str0, str2, 0);
	tamanho2 = strlcat(str1, str2, 0);
	printf("String final: %s, Tamanho: %d", str0, tamanho1);
	printf("\nString final: %s, Tamanho: %d", str1, tamanho2);
}