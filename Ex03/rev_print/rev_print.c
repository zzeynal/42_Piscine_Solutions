#include <unistd.h>


char	*ft_rev_print(char *str)
{
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		i++;
	}
	i--;
	while(i >=0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (str);
}


int main(int argc, char *argv[])
{
	ft_rev_print(argv[1]);
	write(1, "\n", 1);
}
