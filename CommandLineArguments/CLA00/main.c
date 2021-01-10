void	ft_putchar(char c);

void	ft_putstr(char *str);

int	main(int argc, char **argv)
{
	int	i;

	//argcは常に1以上で、1(配列上だと0)がこのファイル名となっている。
	if (argc > 1)
	{
		//配列上の1がコマンドライン引数の最初となる為
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
