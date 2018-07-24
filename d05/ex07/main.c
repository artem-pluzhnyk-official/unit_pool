#include <stdio.h>
#include <string.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n); //changeble

int main()
{
    printf("%d %d", ft_strncmp("Schol 42", "School 47", 5), strncmp("Schol 42","School 47", 5)); //changable
	return (0);
}
