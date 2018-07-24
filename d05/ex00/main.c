#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str); //changeble

int main()
{
	ft_putstr("42 - Classics"); //changeble
	return (0);
}
