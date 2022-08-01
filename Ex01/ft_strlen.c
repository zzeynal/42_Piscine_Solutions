
int	ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		i++;
	}
	return i;
}

int	main()
{
	char *str = "hello";
    char **abc;
	abc = &str;
	ft_strlen(*abc);
	return 0;
}
