

#include <unistd.h>


int	main(int argc, char *argv[])
{
	if(argc <=1)
	{
		write(1, "\n", 1);
		return (0);
	}
	
	int j;
	while(argv[1][j] != '\0')
	{
		if(argv[1][j] >= 'A' && argv[1][j] <= 'Z')
		{
			argv[1][j] = (argv[1][j] - 'A') + 'a';
			write(1, &argv[1][j], 1);
		}
		else if(argv[1][j] >= 'a' && argv[1][j] <= 'z')
		{
			argv[1][j] = (argv[1][j] - 'a') + 'A';
			write(1, &argv[1][j], 1);
		}
		else
			write(1, &argv[1][j], 1);
		j++;
	}
	write(1, "\n", 1);
	return 0;
}
