#include "shell.h"

/**
 * main - entry point of hsh terminal
 * @ac: arguments count
 * @av: argument list vector
 *
 * Return: 0 on success, 1 otherwise
 */

int main(int ac, char **av)
{
	info_t info[] = {{
		NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, 0, 0, 0, NULL, 0, 0, 0
	}};
	int fd = 5;

	if (ac == 2)
	{
		fd = open(av[1], O_RDONLY);
		if (fd == -1)
		{
			if (errno == EACCES)
				exit(1226);
			if (errno == ENOENT)
			{
				_eputs(av[0]);
				_eputs(": 0: Can't open ");
				_eputchar('\n');
				_eputchar(BUF_FLUSH);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		info->readfd = fd;
	}
	populate_env_list(info);
	read_history(info);
	hsh(info, av);

	return (EXIT_SUCCESS);
}
