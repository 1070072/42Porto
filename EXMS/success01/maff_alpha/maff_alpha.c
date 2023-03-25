
#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ", 26);
		write(1, "\n", 1);
	}
	else if (argv[1] != 0)
	{
		write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ", 26);
		write(1, "\n", 1);
	}
	else
	{
		write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ", 26);
		write(1, "\n", 1);
	}
}