#include <stdio.h>

char	*ft_strstr(char *str, char *to_find); //changeble
int main()
{
	char *dstr;
	printf("%s", ft_strstr("School 42 13", "42")); //changable
	return (0);
}
