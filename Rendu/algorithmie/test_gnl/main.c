#include "get_next_line.h"
#include <fcntl.h>

int main()
{
	int		fd;
	char	*line;
	int		ret;

	fd = open("test.txt", O_RDONLY);
	while ((ret = get_next_line(0, &line)) > 0)
	{
		ft_putnbr(ret);
		ft_putstr(" : ");
		ft_putendl(line);
		ft_strdel(&line);
	}
}
