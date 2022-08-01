#include <unistd.h>


int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while(str[i])
		if(!(str[i] == ' ' || str[i] == '\t'))
			i++;
		//else
		return i;
}


char *ft_first_word(char *str)
{
	int	i;

	i = ft_strlen(str);
	while(i)
	{
		i--;
		if(str[i] == ' ' || str[i] == '\n' || str[i])
		 
	}
}


int	main(int argc, char *argv[])
{
	if(argc == 2)
		ft_firts_word(argv[1]);
	write(1, '\n', 1);
	return 0;
}
