#include <stdio.h>
#include <string.h>
int	ft_strcmp(char *s1, char *s2); //changeble

int main()
{
	printf("%d %d", ft_strcmp("School 42", "School 47"), strcmp("School 42","School 47")); //changable
	return (0);
}
