#include "get_next_line.h"
#include "libft.h"

int		main(void)
{
	char		*str;

	if ((str = get_next_line(0)))
		ft_putstr("OK\n");
	else
		ft_putstr("KO\n");
	return (0);
}