
#include <unistd.h>

int main(int argc, char *argv[])
{
	if (argc <= 1)
		write(1, "\n", 1);
	int i;
	int j;

	i = 0;
	j = 0;
	while(i < argc-1)
	{
		i++;
	}
	while(argv[i][j] != '\0')
	{
		write(1, &argv[i][j], 1);
		j++;
	}
	write(1, "\0", 1);
	return 0;
}


/*
Examples:

$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
chats$

$> ./aff_last_param "j'aime le savon" | cat -e
j'aime le savon$
$> ./aff_last_param
$*/
