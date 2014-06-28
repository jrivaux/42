#include <stdio.h>
#include <string.h>

void		test(void *tmp)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = ((char *)tmp)[0];
	b =((char *)tmp)[1];
	c =((char *)tmp)[2];
	d =((char *)tmp)[3];
	printf("%d %d %d %d\n", (int)a, (int)b, (int)c, (int)d);
}

int			main(int ac, char **av)
{
	unsigned int i;
	
	i = 512;
	test(&i);
}
