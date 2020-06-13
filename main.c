#include "get_next_line.h"
#include <stdio.h>

int main(int ac, char **av)
{
	char	*line;
	int	fd1;
	int	i;

	ac = 0;
	fd1 = open(av[1], O_RDONLY);
	i = get_next_line(fd1, &line);
	printf("%d %s\n",i,line);
	i = get_next_line(fd1, &line);
	printf("%d %s\n",i,line);
	i = get_next_line(fd1, &line);
	printf("%d %s\n",i,line);
	i = get_next_line(fd1, &line);
	printf("%d %s\n",i,line);
}
