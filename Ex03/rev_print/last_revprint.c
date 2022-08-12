

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	i--;
	while (str[i] != ' ')
	{
		if (str[i] == ' ')
			break;
		write(1, &str[i], 1);
		i--;
	}
	return (str);
	write(1, "\n", 1);
}



int	main(int argc, char *argv[])
{
	ft_rev_print(argv[1]);
	return 0;
}
