#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n); //changeble

int main()
{
	char *dstr;
	printf("%s", ft_strncpy(dstr, "School 42", 6)); //changable
	return (0);
}
