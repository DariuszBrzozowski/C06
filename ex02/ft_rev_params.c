#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*str;

	if (argc > 1)
	{
		i = argc - 1;
		while (i > 0)
		{
			str = argv[i];
			while (*str != '\0')
			{
				write(1, str, 1);
				str++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
