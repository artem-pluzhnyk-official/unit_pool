#include <unistd.h>

int	ft_putchar(char *c)
{
	write(1, &c, 1);
    return (0);
}

void ft_putnbr(int nb); //changeble

int main()
{
	ft_putnbr(47); //changeble
	return (0);
}
