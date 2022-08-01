

void	ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}


int	main()
{
	int a = 1;
	int b = 2;
	int *c = &a;
	int *d = &b;

	ft_swap(c, d);
	return 0;
}
